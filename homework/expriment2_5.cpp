#include<iostream>
using namespace std;
void test10()//����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո������ַ��������ַ��ĸ�����
{
	char c;
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0;
	cout << "������һ���ַ�" << endl;
	while (cin.get(c) && c !='\n')
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'C'))
		{
			n1++;
		}
		else if (c == ' ')
		{
			n2++;
		}
		else if (c>='0' && c<='9')
		{
			n3++;
		}
		else
		{
			n4++;
		}
	}
	cout << "����Ӣ����ĸ" << n1 << "��,�ո�" << n2 << "��,�����ַ�" << n3 << "��,�����ַ�" << n4 << "��" << endl;
}
int main()
{
	for (int i = 0; i < 3; i++)
	{
		test10();
	}
	return 0;
}