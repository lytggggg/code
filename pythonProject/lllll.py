# -*- coding: utf-8 -*-
import json

import pymysql
import requests
import re

url = "https://cn.bing.com/images/search?q=%e9%95%bf%e6%b1%9f%e5%a4%a7%e6%a1%a5&qpvt=%e9%95%bf%e6%b1%9f%e5%a4%a7%e6%a1%a5&tsc=ImageHoverTitle&form=IGRE&first=1"
url2 = "https://baike.baidu.com/item/%E9%95%BF%E6%B1%9F%E5%A4%A7%E6%A1%A5/307880"

headers = {
    "user-agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.5060.66 Safari/537.36 Edg/103.0.1264.44"
}
headers2 = {
    "user-agent": "MoInvalid return character or leadizilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.5060.66 Safari/537.36 Edg/103.0.1264.44"
}
resp = requests.get(url, headers=headers)
page_content = resp.text

obj = re.compile(r' style=.*?&quot;purl&quot;:&quot;.*?&quot;,&quot;murl&quot;:&quot;(?P<url>.*?)&quot;,&quot;turl',
                 re.S)
obj2 = re.compile(r'<td.*?data-lemmaid=.*?>(?P<name>.*?)</a>', re.S)

result = obj.finditer(page_content)
arr = []
db = pymysql.connect("localhost", "root", "123", "kechengsheji")
# 使用cursor()方法获取操作游标
cursor = db.cursor()
# 打开数据库连接

id = 342+35+35+35+35+35+35+35+35+35+35+35+35+35+35+35+35+35+35
for it in result:
    print(it.group("url"))
    arr.append(it.group("url"))
    sql = "update  url  set url=%s where id=%s "
    # sql2 = sql.format(it.group("url"),id)
    cursor.execute(sql, (it.group("url"), id))
    id = id + 1
    # 执行sql语句
    # 提交到数据库执行
    db.commit()
    # 如果发生错误则回滚
    db.rollback()

db.close()
print(len(arr))
