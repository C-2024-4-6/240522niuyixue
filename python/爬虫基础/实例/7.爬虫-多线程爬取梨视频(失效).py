import requests
from lxml import etree
global text2
import re
url='https://www.pearvideo.com/category_1'#梨视频网页
headers={
'User-Agent':'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/128.0.0.0 Safari/537.36 Edg/128.0.0.0'
}
pagetext=requests.get(url=url,headers=headers).text
tree=etree.HTML(pagetext)
li_list=tree.xpath('//*[@id="categoryList"]/li')
rep='src="(.*?)"'
for li in li_list:
    href=li.xpath('./div/a/@href')[0]
    detailhref='https://www.pearvideo.com/'+href
    text2=requests.get(url=detailhref,headers=headers).text
    tree2=etree.HTML(text2)
    #videourl=tree2.xpath('//*[@id="JprismPlayer"]/video')
    #videourl=tree2.xpath('/html/body/div[2]/div[1]/div[1]/div[1]/div[1]/div')
    #videourl=re.findall(rep,text2)
    #print(videourl)
with open('1.html','w',encoding='utf-8') as fp:
    fp.write(text2)