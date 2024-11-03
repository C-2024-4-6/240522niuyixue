print(100)#默认十进制
print(0b101010111)#二进制以0b开头
print(0o777)#八进制以0o开头
print(0xABE4)#十六进制以0x开头
#输出结果为十进制
print(bin(56))#十进制转2进制用bin
print(1.1+2.1)
print(1.1+2.2)
#解决小数错位问题,需导入decimal模块
from decimal import Decimal#第二个大写
print(Decimal('1.1')+Decimal('2.2'))#单引号内写浮点数
