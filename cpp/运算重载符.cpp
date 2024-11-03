#include <iostream>
#include <string>
using namespace std;
class myint {
	int a = 0;

};
class person {

public:
	int age;
	int score;
	person()
	{

	}
	person(int a, int s)
	{
		this->age = a;
		this->score = s;

	}
	~person()
	{
		cout << "我" << age << "岁了," << "考" << score << "分" << endl;
	}


};
//加法重载
person operator+(person & p1, person & p2){
	person p3;
	p3.age = p1.age + p2.age;
	p3.score = p1.score + p2.score;
	return p3;
}
//自加重载
//左移运算符重载
void operator<<(ostream &cout,person &p)
{
	//cout为输出流对象ostream
	cout << "大家好,我" << p.age << "岁了,考了" << p.score << "分" << endl;
}
//等号重载
bool operator==(person& p1, person& p2)
{
	if (p1.age == p2.age && p1.score == p2.score)
	{
		return true;
	}

	else {
		return false;
	}
		
}


int main() {

	person p1(10, 50);
	person p2(20, 60);
	person p3 = p1 + p2;

	if ( !(p3 == p2))
	{
		cout << "p3和p2不相同" << endl;

	}
	cout << p1;
}