#include<iostream>
using namespace std;
void test08()//����������ж�
{
	double a, b, c, s;
	cout << "��ֱ��������������߳�(�Կո�Ϊ���)" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)//�ж��ܷ񹹳�������
	{
		s = a + b + c;
		if (a == b || b == c || a == c)
		{
			cout << "�ܹ����ɵ���������,��";
		}
		else
		{
			cout << "�ܹ����ɷǵ���������,��";
		}
		cout << "�ܳ�Ϊ" << s << endl;
	}
	else
	{
		cout << "�������޷�����������" << endl;
	}
}
int main()
{
	for (int i = 0; i < 3; i++)
	{
		test08();
	}
	return 0;
}