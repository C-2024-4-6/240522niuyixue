#include<iostream>
using namespace std;
void test42()
{
	int n = 0;
	cout << "输入元素个数: ";
	cin >> n;
	system("cls");
	double arr[120];
	for (int i = 0; i < n; i++)
	{
		cout << "请输入第" << i + 1 << "个元素:" << endl;
		cin >> arr[i];
	}
	cout << "你指定的数组为: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i]<<" ";

	}
	cout << endl;
	//核心代码,实际步数为n*(n-1)
	for (int j = n - 1; j > 0; j--)
	{
		for (int q = 0; q < j; q++)
		{
			if (arr[q] > arr[q + 1])
			{
				swap(arr[q], arr[q + 1]);
			}
		}

	}
	cout << "起泡排序的结果为: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i]<<" ";

	}
}
//int main() {
//	test42();
//	return 0;
//}

