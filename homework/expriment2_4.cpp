#include<iostream>
using namespace std;
void test09()//��ɼ���������ʵ�֣�+ - * / %�����㡣���ǳ���Ϊ 0 ��������Ƿ������
{
	double a, b,result;
	char c;
	cout << "������Ҫ���м����������:" << endl;
	cin >> a >> b;
	cout << "�����������(+ - * / %):"<<endl;
	cin >> c;
	switch (c)
	{
	case '+':
		result = a + b;
		cout << "������Ϊ:" << result << endl;
		break;
	case '-':
		result = a - b;
		cout << "������Ϊ:" << result << endl;
		break;
	case '*':
		result = a * b;
		cout << "������Ϊ:" << result << endl;
		break;
	case '/':
		if(b!=0)
		{
			result = a / b;
			cout << "������Ϊ:" << result << endl;
		}
		else
		{
			cout << "��������Ϊ0!!"<<endl;
		}
		break;
	case '%':
		if (floor(a) == a && floor(b) == b)//�ж�a,b�Ƿ�Ϊ����
		{
			result = int(a) % int(b);
			cout << "������Ϊ:" << result << endl;
		}
		else
		{
			cout << "��ʹ����������ȡģ����!" << endl;
		}
		break;
	default:
		cout << "������ָ���������" << endl;
	}
}
int main()
{
	for (int i=0;i<10;i++)
	{
		test09();
	}
	return 0;
}