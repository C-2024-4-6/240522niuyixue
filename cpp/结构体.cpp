#include<iostream>
#include<string>
using namespace std;
static void test01()//静态函数,只能在此文件中调用
{
	struct content
	{
		string name;
		int id;

	};
	struct student//struct关键字定义结构体变量
	{
		int age;
		content myco;//结构体嵌套
	}s1,s2,s3,s4;//该格式直接实例化了student结构体
	s1.age = 11;//使用.属性直接赋值
	s1.myco.name ="小明";
	student* p = &s2;
	p->age=12;//对于指向结构体的指针,使用->属性进行赋值
	s3 = s2;//同一结构体类型可用=赋值
	cout << "s3.age=" << s3.age << endl;
	s4 = { 15,{"小红",7789} };//使用{}按照属性顺序进行结构体初始化
	cout << s4.myco.name<<endl;
	student s5[2] = { {16,{"小强",12345}},{18,{"小光",45678}} };//定义结构体数组并初始化
	cout << s5[0].myco.name << endl;//输出小强
}

//int main()
//{
//	test01();
//	return 0;
//}