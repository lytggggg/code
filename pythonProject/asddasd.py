# -*- coding: utf-8 -*-
import json
import re

import pymysql
import requests
import sys
reload(sys)
sys.setdefaultencoding('utf-8')

def coords(city):
    url = 'https://restapi.amap.com/v3/geocode/geo'  # 输入API问号前固定不变的部分
    params = {'key': 'c10ddd5b13ad5e09273b52a512730088',
              'address': city}  # 将两个参数放入字典
    res = requests.get(url, params)
    jd = json.loads(res.text)
    return jd['geocodes'][0]['location']


url = "https://baike.baidu.com/item/%E9%95%BF%E6%B1%9F%E5%A4%A7%E6%A1%A5/307880"
url2 = "https://soso.huitu.com/search?kw=%E5%A4%A7%E6%A1%A5"
headers = {
    "user-agent": "MoInvalid return character or leadizilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.5060.66 Safari/537.36 Edg/103.0.1264.44"
}
headers2 = {
    "user-agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.5060.66 Safari/537.36 Edg/103.0.1264.44"
}
resp = requests.get(url, headers=headers)
resp2 = requests.get(url, headers=headers2)

page_content = resp.text
page_content2 = resp2.text

obj = re.compile(r'<td.*?data-lemmaid=.*?>(?P<name>.*?)</a>', re.S)
obj2 = re.compile(r'<a.*?originalsrc="(?P<url>.*?)" alt', re.S)

result = obj.finditer(page_content)
result2 = obj2.finditer(page_content2)

# 打开数据库连接
db = pymysql.connect("localhost", "root", "123", "kechengsheji")

# 使用cursor()方法获取操作游标
cursor = db.cursor()

# SQL 插入语句
for it in result:
    print(it.group("name"))
    print(coords(it.group("name")))
    sql = """INSERT INTO url(id,jd,wd,name,url)  VALUES (null, %s, %s,%s, 'M')"""
    sql2 = sql.format(coords(it.group("name")).split(",")[0], coords(it.group("name")).split(",")[1],it.group("name"))
    # 执行sql语句
    cursor.execute(sql,(coords(it.group("name")).split(",")[0], coords(it.group("name")).split(",")[1],it.group("name")))
    # 提交到数据库执行
    db.commit()
    # 如果发生错误则回滚
    db.rollback()

# 关闭数据库连接
db.close()
