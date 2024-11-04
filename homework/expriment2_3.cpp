#include<iostream>
using namespace std;
void test08()//三角形相关判断
{
	double a, b, c, s;
	cout << "请分别输入三角形三边长(以空格为间隔)" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)//判断能否构成三角形
	{
		s = a + b + c;
		if (a == b || b == c || a == c)
		{
			cout << "能够构成等腰三角形,其";
		}
		else
		{
			cout << "能够构成非等腰三角形,其";
		}
		cout << "周长为" << s << endl;
	}
	else
	{
		cout << "该三边无法构成三角形" << endl;
	}
}
int main()
{
	for (int i = 0; i < 3; i++)
	{
		test08();
	}
	return 0;
}