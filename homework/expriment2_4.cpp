#include<iostream>
using namespace std;
void test09()//完成计算器程序，实现（+ - * / %）运算。考虑除数为 0 与运算符非法的情况
{
	double a, b,result;
	char c;
	cout << "请输入要进行计算的两个数:" << endl;
	cin >> a >> b;
	cout << "请输入运算符(+ - * / %):"<<endl;
	cin >> c;
	switch (c)
	{
	case '+':
		result = a + b;
		cout << "计算结果为:" << result << endl;
		break;
	case '-':
		result = a - b;
		cout << "计算结果为:" << result << endl;
		break;
	case '*':
		result = a * b;
		cout << "计算结果为:" << result << endl;
		break;
	case '/':
		if(b!=0)
		{
			result = a / b;
			cout << "计算结果为:" << result << endl;
		}
		else
		{
			cout << "除数不能为0!!"<<endl;
		}
		break;
	case '%':
		if (floor(a) == a && floor(b) == b)//判断a,b是否为整数
		{
			result = int(a) % int(b);
			cout << "计算结果为:" << result << endl;
		}
		else
		{
			cout << "请使用整数进行取模运算!" << endl;
		}
		break;
	default:
		cout << "请输入指定的运算符" << endl;
	}
}
int main()
{
	for (int i=0;i<10;i++)
	{
		test09();
	}
	return 0;
}