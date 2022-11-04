#!/usr/bin/python
# -*- coding: utf-8 -*-
import pymysql
import requests
import json


def coords(city):
    url = 'https://restapi.amap.com/v3/geocode/geo'  # 输入API问号前固定不变的部分
    params = {'key': 'c10ddd5b13ad5e09273b52a512730088',
              'address': city}  # 将两个参数放入字典
    res = requests.get(url, params)
    jd = json.loads(res.text)
    return jd['geocodes'][0]['location']


areas = ['重庆马桑溪长江大桥', '重庆千厮门大桥', '重庆寸滩大桥', '重庆嘉陵江大桥', '双碑嘉陵江大桥', '朝天门长江大桥', '重庆黄花园大桥', '重庆长江大桥', '千厮门嘉陵江大桥', '重庆花溪大桥',
         '重庆大佛寺长江大桥', '重庆嘉悦大桥', '重庆东水门长江大桥']
a = coords('重庆马桑溪长江大桥').split(",")

print
coords('重庆马桑溪长江大桥').split(",")[1]
# 打开数据库连接
db = pymysql.connect("localhost", "root", "123", "kechengsheji")

# 使用cursor()方法获取操作游标
cursor = db.cursor()

# SQL 插入语句

sql = """INSERT INTO url  VALUES (null, '{}','{}' ,'M')"""
sql2 = sql.format(coords('重庆马桑溪长江大桥').split(",")[0], coords('重庆马桑溪长江大桥').split(",")[1])

try:
    # 执行sql语句
    cursor.execute(sql2)
    # 提交到数据库执行
    db.commit()
except:
    # 如果发生错误则回滚
    db.rollback()

# 关闭数据库连接
db.close()
