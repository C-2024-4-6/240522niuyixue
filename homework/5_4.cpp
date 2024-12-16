#include<iostream>
#include<string>
using namespace std;
class Student
{
private:
    string num;
    double score;
public:
    void init(string n, double s)
    {
        this->num = n; this->score = s;
    }
    string rnum() { return this->num; }
    double rs() { return this->score; }
};
double m = 0; string mnum;
void max(Student* p)
{
    for(int i:{1,2,3,4,5})
    {
        if (m == 0) { m = p->rs(); mnum = p->rnum(); }
        if (p->rs() > m) { m = p->rs(); mnum = p->rnum(); }
        if(i!=5) p++;
    }
    cout << "highest score: " << m << "\nhis number: " << mnum << endl;
}
int main()
{
    Student students[5];
    for (int i = 0; i < 5; i++)
    {
        string n; double s;
        cin >> n >> s;
        students[i].init(n, s);
    }
    max(students);
    return 0;
}