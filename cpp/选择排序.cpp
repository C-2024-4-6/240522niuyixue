#include<iostream>
using namespace std;
//选择排序,时间复杂度为O（n^2）
void test2()
{
	int n = 0;
	cout << "输入元素个数:" << endl;
	cin >> n;
	system("cls");
	int arr[120];
	for (int i = 0; i < n; i++)
	{
		cout << "请输入第" << i + 1 << "个元素:" << endl;
		cin >> arr[i];
		system("cls");
	}
	cout << "你指定的数组为:";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i]<<" ";

	}

	//核心代码
	int minindex = 0;
	for (int i = 0; i < n; i++)
	{
		for(int a=i+1;a<n;a++)
		{ 
			if (arr[a] < arr[minindex])
			{
				minindex = a;
			}
		}
		swap(arr[i], arr[minindex]);
	}

	cout << endl;
	cout << "选择排序的结果为:";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i]<<" ";

	}
}
//int main() {
//	test2();
//}