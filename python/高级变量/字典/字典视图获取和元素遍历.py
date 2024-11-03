#获取字典视图
a={'我':1,'你':2,'他':3}
print(a.keys())#keys获取所有key
print(a.values())#values()获取所有value
print(a.items())#items()获取所有对应

for i in a:
    print(i)
    print(i,a.get(i))
