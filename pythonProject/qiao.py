# -*- coding: utf-8 -*-
import json
import re
import pymysql
import requests
import sys

sys.setdefaultencoding('utf-8')


def coords(city):
    url = 'https://restapi.amap.com/v3/geocode/geo'  # 输入API问号前固定不变的部分
    params = {'key': 'c10ddd5b13ad5e09273b52a512730088',
              'address': city}  # 将两个参数放入字典
    res = requests.get(url, params)
    jd = json.loads(res.text)
    return jd['geocodes'][0]['location']


url = "https://www.wanweibaike.net/wiki-%E4%B8%96%E7%95%8C%E5%A4%A7%E6%A1%A5%E5%88%97%E8%A1%A8"
headers = {
    "user-agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.5060.66 Safari/537.36 Edg/103.0.1264.44"
}
resp = requests.get(url, headers=headers)
page_content = resp.text
obj = re.compile(r'<tr>.*?<td colspan="2">(?P<name>.*?)<.*?</td>', re.S)
result = obj.finditer(page_content)
# 打开数据库连接
db = pymysql.connect("localhost", "root", "123", "kechengsheji")
# 使用cursor()方法获取操作游标
cursor = db.cursor()
for it in result:
    if it.group("name") != "卫辉卫共特大桥 " and it.group("name").strip():
        try:
            print(it.group("name")),
            print(coords(it.group("name")).split(",")[0]),
            print(coords(it.group("name")).split(",")[1])
            sql = """INSERT INTO url(id,jd,wd,name,url)  VALUES (null, %s, %s,%s, 'M')"""
            # 执行sql语句
            cursor.execute(sql, (
                coords(it.group("name")).split(",")[0], coords(it.group("name")).split(",")[1], it.group("name")))
            # 提交到数据库执行
            db.commit()
            # 如果发生错误则回滚
            db.rollback()
        except Exception as e:
            pass
        continue
db.close()
