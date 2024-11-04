#include<iostream>
using namespace std;
void test06()//定义字符转换函数
{
	char u,f_u;
	cout << "请输入一个英文字母:"<<endl;
	cin >> u;
	if (u >= 'a' && u <= 'z')//判断u为小写字母
	{
		f_u = u - 32;//通过ASCII码关系转换出大写字母
		cout <<"它的大写是: " << f_u << endl;
	}
	else if (u >= 'A' && u <= 'Z')//判断u为大写字母
	{
		f_u = u + 1;
		cout << "它的后继字符的ASCII码值为: " << int(f_u) << endl;
	}
	else
	{
		cout << "请输入正确的英文字母!"<<endl;
	}
}
int main()
{
	while (true)//为方便观察结果,此处暂使用死循环
	{
		test06();
	}
	return 0;
}