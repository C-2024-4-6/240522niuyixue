#include<iostream>
#include<string>
using namespace std;

void test02()
{
	enum color//使用enum 枚举名{}定义枚举类型
	{
		red,blue=9,yellow//枚举类型只能在枚举表中取值,三个枚举符存在索引,分别为0,9,1
	};
	cout << red<<endl;//直接输出枚举符索引
	color a = red;//将枚举符red赋值给color类型a
	cout << a<<endl;//此时会输出索引值0
	color b = blue;
	cout << b<<endl;
	color c = (color)1;//可使用强制类型转换索引值
	cout << c << endl;
}
//int main()
//{
//	test02();
//	return 0;
//}