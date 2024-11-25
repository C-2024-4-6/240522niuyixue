#include<iostream>
using namespace std;
void softarr(int* arr, int n)
{
	for (int j = n - 1; j > 0; j--)
	{
		for (int i = 0; i < j; i++) { if (arr[i] > arr[i + 1]) swap(arr[i], arr[i + 1]); }
	}
}
int main()
{
	cout << "输入元素个数: ";
	int n; cin >> n;
	int* p = new int[100];
	int* q = p;
	int* s = p;
	cout << "输入元素: ";
	for (int i = 0; i < n; i++)
	{
		cin >> *p;
		p++;
	}
	softarr(q,n);
	cout << "排序后的数组为: ";
	for (int i = 0; i < n; i++)
	{
		cout << *q << " ";
		q++;
	}
	delete[] s;
	return 0;
}