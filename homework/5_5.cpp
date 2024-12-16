#include<iostream>
using namespace std;
class Point
{
private:
double x,y;
public:
Point(double x,double y)
{
    this->x=x;this->y=y;
}
void setPoint(int x,int y)
{
    this->x+=x;this->y+=y;
}
void display()
{
    cout<<"("<<this->x<<","<<this->y<<")"<<endl;
}
};
int main()
{
    Point p(60,80);
    p.display();
    p.setPoint(20,20);
    p.display();
    p.setPoint(-10,0);
    p.display();
    return 0;
}