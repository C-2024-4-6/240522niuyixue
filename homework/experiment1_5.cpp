#include<iostream>
#include<iomanip>
using namespace std;
void test05()//�����¶���ת������
{
	double tem1 = 0.0,tem2 = 0.0;
	cout << "�����뻪���¶�: "<<endl;
	cin >> tem1;
	tem2 = (tem1 - 32) * 5 / 9;//���ݹ�ʽ���������¶�
	cout << fixed << setprecision(2) << "�������¶�ֵΪ: " << tem2 << "��"<<endl;
	system("pause");
}
int main()
{
	test05();
	return 0;
}