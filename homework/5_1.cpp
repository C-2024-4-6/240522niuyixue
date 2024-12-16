#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:          
int hour;
int minute;
int sec;
public:
Time(int h,int m,int s)
{
    this->hour=h;this->minute=m;this->sec=s;
}
void show()
{cout<<this->hour<<": "<<this->minute<<": "<<this->sec<<endl;}
};
int main()
{
    int h,m,s;
    cin>>h>>m>>s;
    Time t1(h,m,s);
    t1.show();
    return 0;
}
