# 导入必要的库
import requests
from lxml import etree
import time
import re
import os
headers = {
    "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.0.0 Safari/537.36",
    "Referer": "https://www.doutub.com/"  # referer防盗链：溯源，当前本次请求的上一级是谁。
}
num = int(input("你想爬取前几页："))
if os.path.exists("images") == False:
    os.mkdir("images") #如果不存在images文件夹，则创建images文件夹
for n in range(num): # for循环提取多页内容
    url = f'https://www.doutub.com/img_lists/new/{n+1}'
    # url 是网址，这里使用字符串拼接网址
    # 如 https://www.doutub.com/img_lists/new/1（第一页网址）  https://www.doutub.com/img_lists/new/2（第二页网址）等等
    resp = requests.get(url, headers=headers)
    html = etree.HTML(resp.text)
    divs = html.xpath("//div[@class='cell']")[0:50]
    # 返回的 divs 是一个列表，切片去除无用信息，第51个div我们不需要,详细看图三

    for div in divs:
        imgSrc = div.xpath("./a/img/@data-src")[0]
        word = div.xpath("./a/span/text()")[0].strip()
        name = re.sub(r'[\:*?"<>/|]', '', word) #使用正则表达式sub函数去除 \:*?"<>/|这些字符。原因看图四
        img_type = imgSrc.split(".")[-1] #因为图片文件的格式有些是jpg，有些是gif，这里取出图片格式
        # 下载图片
        img_resp = requests.get(imgSrc, headers=headers)
        with open("images/" + name + "." + img_type, mode="wb") as f:
            f.write(img_resp.content)
        print(name + "." + img_type, "下载完成")
        time.sleep(0.3)  # 防止频繁访问被封ip，这里休息0.3秒
    print(f"\n第{n+1}页下载完成！\n")
print("全部下载完成！！！")
