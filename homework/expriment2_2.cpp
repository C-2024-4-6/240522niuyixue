#include<iostream>
using namespace std;
void test07()
{
	double x, y;
	cout << "请输入x的值: " << endl;
	cin >> x;
	if (x > 0 && x < 1)
	{
		y = 3 - 2 * x;
		cout << "y的值为:" << y << endl;
	}
	else if (x >= 1 && x < 5)
	{
		y = 2.0 / (4.0 * x) + 1;
		cout << "y的值为:" << y << endl;
	}
	else if (x >= 5 && x < 10)
	{
		y = x * x;
		cout << "y的值为:" << y << endl;
	}
	else
	{
		cout << "x应当大于0小于10"<<endl;
	}
	
}
int main()
{
	for (int i = 0; i < 4; i++)
	{
		test07();
	}
	return 0;
}