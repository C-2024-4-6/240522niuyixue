#include<iostream>
using namespace std;
void test01()
{

}
class people
{
private://私有
	int age;
	int name;
public://公有
	static int kinds;//前缀static表示静态,同一类的所有对象共享,只能类内声明类外定义
	void changeage(int age)
	{
		this->age = age;//this指针指代该类
	}
	void getage()
	{
		cout << "年龄为" << age << "岁" << endl;
	}
	//people(int nam)//构造函数:创建对象自动调用,无返回值
	//{
	//	this->name = nam;
	//	cout << name << "出生了" << endl;
	//}
	~people() //析构函数,对象被释放后自动调用,无参数
	{
		cout << name << "死了";
	}
	static void getkind()
	{
		cout << "是" << kinds;
	}
};
int main()
{
	people p1();
	//p1.changeage(5);
	people::kinds = 1;//类名::属性（或函数）可修改静态~
	//p1.getage();
	people p2 = people();
	p2.getkind();

	return 0;

}