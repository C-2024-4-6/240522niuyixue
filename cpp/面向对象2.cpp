#include<iostream>
#include<string>
using namespace std;
class Person
{
	int age;
	friend class guy;//friend指定友元,友元可以访问本类的私有属性
	friend void seeage(Person& p);//全局函数,类,成员函数均可作为友元
	friend Person operator+ (Person& a, Person& b);

public:
	Person(int age = 0)
	{
		this->age = age;

	}
};
class guy {
public:
	void see(Person& p)
	{
		cout << "他" << p.age << "岁了"<<endl;
	}
};
void seeage(Person& p)
{
	cout << "他" << p.age << "岁了"<<endl;
};
//全局函数重载运算符operator
Person operator+ (Person& a, Person& b)
{
	Person p3;
	p3.age = a.age + b.age;
	return p3;
}

int main()
{
	Person p1(20);
	Person p2(10);
	guy g1;
	g1.see(p1);
	seeage(p1);
	Person p3;
	p3 = p1 + p2;//调用加号重载符
	seeage(p3);
	return 0;
}