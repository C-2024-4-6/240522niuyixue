#include<iostream>
using namespace std;
void test12()
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << '*';
		}
		cout << endl;
	}
}
int main()
{
	test12();
	return 0;
}