import requests
#代理网站:www.goubanjia.com(寄)
url='https://www.baidu.com/s?ie=utf-8&f=8&rsv_bp=1&rsv_idx=1&tn=68018901_16_pg&wd=ip'
headers={
    'User-Agent':'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/128.0.0.0 Safari/537.36 Edg/128.0.0.0'
}
text1=requests.get(url=url,headers=headers,proxies={'https':'222.222.22.222'})
#proxies中封装字典:{'ip协议':'代理ip'},将请求发送给代理ip,再以代理ip完成请求
