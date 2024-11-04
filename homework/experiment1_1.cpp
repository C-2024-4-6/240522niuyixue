#include<iostream>
using namespace std;
int main()
{	
	int k = 5;//k未定义假定k为5
	int i = k + 1;//Int i = k + 1; int应用小写
	cout << i++ << endl;
	//int i = 1; 重复定义i,删除
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}
