#include<iostream>
#include<string>
using namespace std;
class animal {
public:
	virtual void speak() = 0;//纯虚函数,加入后类成为抽象类,无法实例化对象,
							//子类对象必须重载该函数实现虚继承,此后函数传入子类对象将调用子类方法
protected:

private:
	int age;
};

//class 类名: 继承方式 父类1,继承方式 父类2...
//public:父类中属性在子类中保持不变
//protected:public变protected,其余不变
//private:全变private
class dog:public animal 
{
public:
	void speak()
	{
		cout << "我是山里灵活的狗" << endl;
	}
};
void test01(animal &p)
{
	p.speak();
}
int main(){
	dog gogo;
	test01(gogo);
	return 0;
}