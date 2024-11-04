#include<iostream>
#include<iomanip>
using namespace std;
void test05()//定义温度制转换函数
{
	double tem1 = 0.0,tem2 = 0.0;
	cout << "请输入华氏温度: "<<endl;
	cin >> tem1;
	tem2 = (tem1 - 32) * 5 / 9;//根据公式计算摄氏温度
	cout << fixed << setprecision(2) << "其摄氏温度值为: " << tem2 << "度"<<endl;
	system("pause");
}
int main()
{
	test05();
	return 0;
}