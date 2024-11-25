#include<iostream>
#include<cmath>
using namespace std;
int parseHex(const char* const hexString)
{
	const char* p= hexString;
	int t(0), sum(0);
	while (*p != '\0')
	{t++;p++;}//获取最高位权重
	t--;
	p = hexString;
	while (*p != '\0')
	{
		int num;
		if (*p >= '0' && *p <= '9') num = *p - '0';
		else if (*p >= 'a' && *p <= 'z') num = *p - 'a' + 10;
		else num = *p - 'A' + 10;
		sum += num * pow(16,t);
		t--;
		p++;
	}
	return sum;
}
void etr2()
{
	cout<<"parseHex(\"A5\") is "<<parseHex("A5")<<endl;
	cout << "parseHex(\"ba\") is " << parseHex("ba")<<endl;
}
//int main()
//{
//	etr2();
//	return 0;
//}