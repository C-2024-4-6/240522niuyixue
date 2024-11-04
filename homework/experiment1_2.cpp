#include<iostream>
using namespace std;
const double PI = 3.1415926;//定义标识符常量-圆周率PI
void test02()//定义求圆锥体积函数
{
	double r, h ,v;
	cout << "请输入圆锥底面半径: "<<endl;
	cin >> r;
	cout << "请输入圆锥高: "<<endl;
	cin >> h;
	v = (1.0 / 3.0) * PI * r * r * h;
	cout << "圆锥的体积为: " << v<< endl;
}
int main()
{
	test02();
	return 0;
}