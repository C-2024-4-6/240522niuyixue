#include<iostream>
#include<string>
using namespace std;
void solve(int n,int s,int m,int e)//n:�������� s:��ʼλ m:����λ e:�յ�λ
{
	string position[] = { "null","A","B","C" };
	if (n == 1)
	{
		cout << position[s] << " -> " << position[e]<<endl;
	}
	else
	{
		solve(n - 1, s, e, m);//��CΪ����,��A����n-1�������Ƶ�B
		cout << position[s] << " -> " << position[e]<<endl;//����ʼλʣ�µ�һ�������Ƶ�C
		solve(n - 1, m, s, e);//����ת��Ϊn-1������,����ʼλ�븨��λ����
		n--;

	}
}
//int main()
//{
//	solve(10, 1, 2, 3);
//	return 0;
//}