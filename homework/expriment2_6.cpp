#include<iostream>
using namespace std;
void test11()//求 a 和 b 的最大公约数与最小公倍数
{
	int a = 0, b = 0, n1 = 0, n2 = 0, m = 0, f = 0;
	cout << "请输入两个正整数:" << endl;
	cin >> a >> b;
	if (a >= b)
	{
		n1 = a, n2 = b;
	}
	else
	{
		n1 = b, n2 = a;
	}
	while (n2 != 0)//辗转相除法
	{
		m = n1 % n2;
		n1 = n2;
		n2 = m;
	}
	f = a * b / n1;
	cout << "最大公约数为:" << n1 << endl;
	cout << "最小公倍数为:" << f << endl;
}
int main()
{
	for (int i = 0; i < 3; i++)
	{
		test11();
	}
	return 0;
}
