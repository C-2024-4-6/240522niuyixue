#include<iostream>
#include "mytriangle.h"
using namespace std;
int main()
{
	cout << "请输入三边长: ";
	double a, b, c;
	cin >> a >> b >> c;
	if (is_valid(a, b, c)) {
		cout << "能够构成三角形,其面积为: " << area(a, b, c) << endl;
	}
	else { cout << "无法构成三角形!" << endl; }
	return 0;
}