#include<iostream>
using namespace std;
void test10()//输入一行字符，分别统计出其中英文字母、空格、数字字符和其它字符的个数。
{
	char c;
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0;
	cout << "请输入一行字符" << endl;
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
	cout << "共有英文字母" << n1 << "个,空格" << n2 << "个,数字字符" << n3 << "个,其他字符" << n4 << "个" << endl;
}
int main()
{
	for (int i = 0; i < 3; i++)
	{
		test10();
	}
	return 0;
}