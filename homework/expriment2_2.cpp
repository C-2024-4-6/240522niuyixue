#include<iostream>
using namespace std;
void test07()
{
	double x, y;
	cout << "������x��ֵ: " << endl;
	cin >> x;
	if (x > 0 && x < 1)
	{
		y = 3 - 2 * x;
		cout << "y��ֵΪ:" << y << endl;
	}
	else if (x >= 1 && x < 5)
	{
		y = 2.0 / (4.0 * x) + 1;
		cout << "y��ֵΪ:" << y << endl;
	}
	else if (x >= 5 && x < 10)
	{
		y = x * x;
		cout << "y��ֵΪ:" << y << endl;
	}
	else
	{
		cout << "xӦ������0С��10"<<endl;
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