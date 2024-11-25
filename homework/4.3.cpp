#include<iostream>
using namespace std;
void test43()
{
	bool arr[101];
	for (int i = 2; i <= 100; i++)
	{
		for (int n = i; n <= 100; n += i)
		{
			arr[n] = !arr[n];
		}

	}
	for (int i = 1; i <= 100; i++)
	{
		if (arr[i]) cout << i << " ";
	}
	cout << "号柜子是开着的" << endl;
}
//int main()
//{
//	test43();
//	return 0;
//}