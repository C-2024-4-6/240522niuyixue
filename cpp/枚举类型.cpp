#include<iostream>
#include<string>
using namespace std;

void test02()
{
	enum color//ʹ��enum ö����{}����ö������
	{
		red,blue=9,yellow//ö������ֻ����ö�ٱ���ȡֵ,����ö�ٷ���������,�ֱ�Ϊ0,9,1
	};
	cout << red<<endl;//ֱ�����ö�ٷ�����
	color a = red;//��ö�ٷ�red��ֵ��color����a
	cout << a<<endl;//��ʱ���������ֵ0
	color b = blue;
	cout << b<<endl;
	color c = (color)1;//��ʹ��ǿ������ת������ֵ
	cout << c << endl;
}
//int main()
//{
//	test02();
//	return 0;
//}