#include<iostream>
using namespace std;
void test14()
{
	int sum = 0, day = 0;
	double arv = 0.0;
	for (int i = 2;; i *= 2)
	{
		if (sum+i >=100 )break;
		sum += i;
		day++;
	}
	arv = sum * 0.8 / day;
	cout << "�����" << sum << "��ƻ��,����" << day << "��,ƽ��ÿ�컨" << arv << "Ԫ" << endl;
}
int main()
{
	test14();
	return 0;
}