#include<iostream>
#include<cmath>
using namespace std;
void test13()
{
	double a,xn,xn1;
	cout << "请输入a的值:"<<endl;
	cin >> a;
	xn = a;
	xn1 = 0.5 * (xn + a / xn);
	if (a >= 0)
	{
		while (abs(xn1 - xn) >= 1e-5)
		{
			xn = xn1;
			xn1 = 0.5 * (xn + a / xn);
		}
		cout << "a的平方根是" << xn1<<endl;
	}
	else
	{
		cout << "请输入非负实数" << endl;
	}

}
int main()
{
	for (int i = 0; i < 3; i++)
	{
		test13();
	}
	return 0;
}