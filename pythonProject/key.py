# -*- coding: utf-8 -*-
import json
import requests
import re
def coords(city):
    url = 'https://restapi.amap.com/v3/geocode/geo'  # 输入API问号前固定不变的部分
    params = {'key': 'c10ddd5b13ad5e09273b52a512730088',
              'address': city}  # 将两个参数放入字典
    res = requests.get(url, params)
    jd = json.loads(res.text)
    return jd['geocodes'][0]['location']

url = "https://baike.baidu.com/item/%E9%95%BF%E6%B1%9F%E5%A4%A7%E6%A1%A5/307880"
headers = {
    "user-agent": "MoInvalid return character or leadizilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.5060.66 Safari/537.36 Edg/103.0.1264.44"
}
resp = requests.get(url, headers=headers)

page_content = resp.text
obj = re.compile(r'<td.*?data-lemmaid=.*?>(?P<name>.*?)</a>', re.S)
result = obj.finditer(page_content)
for it in result:
    print(it.group("name"))

