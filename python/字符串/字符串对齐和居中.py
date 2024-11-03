#要求:顺序并且对齐输出以下内容

poem=["登鹳雀楼",
    '王之涣',
    "白日依山尽",
    "黄河入海流",
    "欲穷千里目",
    "更上一层楼"]

for poem_str in poem:
    print("|%s|" % poem_str.center(10,'　'))#此处为中文全角空格
print()

for poem_str in poem:
    print("|%s|" % poem_str.ljust(10,'　'))
print()

for poem_str in poem:
    print("|%s|" % poem_str.rjust(10,'　'))
    
#str.center(width,n)居中对齐,width为宽度,不足的用n补齐
#str.ljust(width,n)居左对齐,l为左,just有调整意思
#str.rjust(width,n)居右对齐,r为右
    
    
