#include<iostream>
using namespace std;
static int arr1[80], arr2[80], arr3[160];
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	const int* p, * q;
	p = list1;q = list2;
	int nump(0), numq(0);
	for (int i = 0; i < (size1 + size2); i++)
	{
		if ((*p > *q) ||(nump==size1))
		{
			list3[i] = *q;
			q++;
			numq++;

		}
		else if((*p<=*q)||numq==size2)
		{
			list3[i] = *p;
			p++;
			nump++;
		}
	}
}
void test44()
{
	int n1, n2;
	cout << "请输入第一个排列好的数组: ";
	cin >> n1;
	for (int i = 0; i < n1; i++)
	{
		cin >> arr1[i];
	}
	cout << "请输入第二个排列好的数组: ";
	cin >> n2;
	for (int i = 0; i < n2; i++)
	{
		cin >> arr2[i];
	}
	merge(arr1, n1, arr2, n2,arr3);
	cout << "合并后的数组为: ";
	for (int i = 0; i < n1 + n2; i++)
	{
		cout << arr3[i] << " ";
	}
}
//int main()
//{
//	test44();
//	return 0;
//}