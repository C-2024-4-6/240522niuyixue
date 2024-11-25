#include<iostream>
using namespace std;
void test41()
{
	double arr[20];
	cout << "请输入10个数: ";
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	//进行排序方便操作
	for (int i = 9; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
		}
	}
	int j = 0;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] != arr[j])
		{
			j++;
			arr[j] = arr[i];
		}
	}
	for (int i = 0; i <= j; i++)
	{
		cout << arr[i]<<" ";
	}
}
//int main()
//{
//	test41();
//	return 0;
//}