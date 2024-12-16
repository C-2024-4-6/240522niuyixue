#include<iostream>
using namespace std;
class Changft
{
private:
double length,width,height;
public:
Changft(double a,double b,double c)
{
    this->length=a;this->width=b;this->height=c;
}
void showv()
{cout<<"V= "<<this->length*this->width*this->height<<endl;}
};
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    Changft c1(a,b,c);
    c1.showv();
    return 0;
}