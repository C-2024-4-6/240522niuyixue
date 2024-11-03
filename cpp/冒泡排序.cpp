#include<iostream>
using namespace std;
//冒泡排序,时间复杂度为O（n^2）
void test1()
{
	int n=0;
	cout << "输入元素个数:" << endl;
	cin >> n;
	system("cls");
	int arr[120];
	for (int i = 0; i < n; i++)
	{
		cout << "请输入第" << i+1 << "个元素:" << endl;
		cin >> arr[i];
		system("cls");
	}
	cout << "你指定的数组为:";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i];
		
	}
	cout << endl;
	//核心代码,实际步数为n*(n-1)
	for (int j = n - 1; j > 0; j--)
	{
		for (int q = 0; q < j; q++)
		{
			if (arr[q] < arr[q + 1])
			{
				swap(arr[q], arr[q + 1]);
			}
		}

	}
	cout << "冒泡排序的结果为:";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i];

	}
}
//int main() {
//	test1();
//}

