#include<iostream>
using namespace std;
void test42()
{
	int n = 0;
	cout << "����Ԫ�ظ���: ";
	cin >> n;
	system("cls");
	double arr[120];
	for (int i = 0; i < n; i++)
	{
		cout << "�������" << i + 1 << "��Ԫ��:" << endl;
		cin >> arr[i];
	}
	cout << "��ָ��������Ϊ: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i]<<" ";

	}
	cout << endl;
	//���Ĵ���,ʵ�ʲ���Ϊn*(n-1)
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
	cout << "��������Ľ��Ϊ: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i]<<" ";

	}
}
//int main() {
//	test42();
//	return 0;
//}

