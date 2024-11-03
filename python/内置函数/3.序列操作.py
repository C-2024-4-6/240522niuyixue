# all(可迭代参数) 所有元素为True则返回True,否则返回False
print(all(()))#注意空列表或元组也返回True
print(all((1,2,3,4,5)))
print(all([0,8,9]))
print(all([False]))

#any(可迭代参数) 所有元素为False才返回False
print(any([1,False]))
print(any([False,0,None,()]))

#sort,sorted排序
#sorted(可迭代参数,reverse=False) #默认False为升序,返回新对象
#list.sort() #仅可用于列表,直接修改原始列表
print(sorted((1,5,8,7,9,11,0)))#元组
print(sorted('aweGnNo'))#字符串,先排大写

li=[5,7,8,22,4,6]
li.sort()
print(li)
#list.reverse反转排序列表
li.reverse()
print(li)

#zip()将可迭代对象作为参数，将对象中的对应索引的元素打包于一个个元组，并生成元组的列表
l2=zip([1,2,3],['a','b','c'])
l3=zip([1,2,3,4],['a','b','c','d','e'])#压缩时会按最少元素对象的索引
print(l2)
print(list(l2))
print(list(l3))
