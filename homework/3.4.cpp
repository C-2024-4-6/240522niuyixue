#include<iostream>
#include "mytriangle.h"
using namespace std;
int main()
{
	cout << "���������߳�: ";
	double a, b, c;
	cin >> a >> b >> c;
	if (is_valid(a, b, c)) {
		cout << "�ܹ�����������,�����Ϊ: " << area(a, b, c) << endl;
	}
	else { cout << "�޷�����������!" << endl; }
	return 0;
}