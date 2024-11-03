s=set({1,8,'哈哈',5,7,9,6})
#判断操作
print(1 in s)
print(11 not in s)

#添加操作
s.add(11)
#add()添加1个元素
print(s)
s.update('新','添')
s.update(['我','也','是'])
#update()添加至少一个元素
print(s)

#删除操作
s.remove('新')
#remove()移除1个元素
print(s.discard('没有这个'))
print(s)
#discard()移除一个元素,若没有该元素不会报错(区别remove)
s.pop()
#删除1个任意元素(对于全为字符串的集合)
#若不全是字符串则会删除第0个
print(s)
s.clear()
#清空集合
print(s)
