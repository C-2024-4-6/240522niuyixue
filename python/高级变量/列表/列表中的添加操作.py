b=['你','是','我','的','谁','杯','必']
b.append(100)
print(b)
#append()用于在列表末尾添加1个元素
#添加后，列表id不变
a=['元素1','元素2']
b.append(a)
print(b)
#将a作为元素添加
b.extend(a)
print(b)
#.extend()用于在末尾添加至少1个元素

k=[1,2,3,4,5,6]
k.insert(1,'哈')
print(k)
#.insert(n,m)用于在列表中索引为n的位置添加m元素

#切片操作
k[1:]=a
print(k)
#将索引1以及之后元素更换为a中元素
k[1:2]=b
print(k)
#将索引1，2之间元素更换为k中元素(去除1元素，保留2元素)
