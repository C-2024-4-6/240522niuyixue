#include<iostream>
using namespace std;
//ѡ������,ʱ�临�Ӷ�ΪO��n^2��
void test2()
{
	int n = 0;
	cout << "����Ԫ�ظ���:" << endl;
	cin >> n;
	system("cls");
	int arr[120];
	for (int i = 0; i < n; i++)
	{
		cout << "�������" << i + 1 << "��Ԫ��:" << endl;
		cin >> arr[i];
		system("cls");
	}
	cout << "��ָ��������Ϊ:";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i]<<" ";

	}

	//���Ĵ���
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
	cout << "ѡ������Ľ��Ϊ:";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i]<<" ";

	}
}
//int main() {
//	test2();
//}