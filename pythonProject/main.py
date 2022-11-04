import requests
import json

url = 'https://restapi.amap.com/v3/geocode/geo/84dfaf3cb27702cc0912a41928cc798f'   # 输入API问号前固定不变的部分
params = { 'key': '你的高德密钥',
           'address': '南京市'   }                # 将两个参数放入字典
res = requests.get(url, params)
print(res.text)