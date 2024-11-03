#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;
//联系人结构体
struct people
{
	string name;
	string sex;
	int age;
	string phone;
	string ads;
};
//通讯录结构体
struct paper
{
	int num = 0;
	people po[100];
};
void sys()//系统主界面显示
{
	cout << "*****************" << endl;
	cout << "*1.添加联系人\t*" << endl;
	cout << "*2.查看联系人\t*" << endl;
	cout << "*3.删除联系人\t*" << endl;
	cout << "*4.更改联系人\t*" << endl;
	cout << "*5.清空联系人\t*" << endl;
	cout << "*0.退出系统\t*" << endl;
	cout << "*****************" << endl;
	cout << "请选择:";
}
void add(paper* p)//1.添加联系人
{
	system("cls");
	string name;
	int sexc;
	int age;
	string phone;
	string ads;
	cout << "请输入姓名:" << endl;
	cin >> name;
	cout << "请选择性别:\n(1.男性;2.女性)" << endl;
	cin >> sexc;
	cout << "请输入年龄:" << endl;
	cin >> age;
	cout << "请输入电话:" << endl;
	cin >> phone;
	cout << "请输入地址:" << endl;
	cin >> ads;
	p->po[p->num].name = name;
	p->po[p->num].age = age;
	p->po[p->num].phone = phone;
	p->po[p->num].ads = ads;
	p->po[p->num].sex = (sexc==1?"男":"女");
	p->num++;
	cout << "添加成功!" << endl;
	Sleep(1500);
	system("cls");
}
void present(paper* p)//2.显示联系人
{
	system("cls");
	cout << "共有" << p->num << "个联系人:" << endl;
	for (int i = 0; i < p->num; i++)
	{
		cout << i + 1 << ".";
		cout << "姓名:" << p->po[i].name<<"\t";
		cout << "性别:" << p->po[i].sex<<"\t";
		cout << "年龄:" << p->po[i].age<<"\t";
		cout << "电话:" << p->po[i].phone<<"\t";
		cout << "住址:" << p->po[i].ads<<endl;
	}
	system("pause");
	system("cls");
}
void del(paper* p) //3.删除联系人
{
	system("cls");
	for (int i = 0; i < p->num; i++)
	{
		cout << i + 1 << ".";
		cout << "姓名:" << p->po[i].name << "\t";
		cout << "性别:" << p->po[i].sex << "\t";
		cout << "年龄:" << p->po[i].age << "\t";
		cout << "电话:" << p->po[i].phone << "\t";
		cout << "住址:" << p->po[i].ads << endl;
	}
	cout << "请输入你要删除的联系人代号:";
	int d = 0;
	cin >> d;
	for (int i = d - 1; i < p->num; i++)
	{
		p->po[i].name = p->po[i + 1].name;
		p->po[i].sex = p->po[i + 1].sex;
		p->po[i].age = p->po[i + 1].age;
		p->po[i].phone = p->po[i + 1].phone;
		p->po[i].ads = p->po[i + 1].ads;
	}
	cout << "删除成功!" << endl;
	p->num--;
	Sleep(1500);
	system("cls");
}
void change(paper* p)//4.更改联系人
{
	system("cls");
	for (int i = 0; i < p->num; i++)
	{
		cout << i + 1 << ".";
		cout << "姓名:" << p->po[i].name << "\t";
		cout << "性别:" << p->po[i].sex << "\t";
		cout << "年龄:" << p->po[i].age << "\t";
		cout << "电话:" << p->po[i].phone << "\t";
		cout << "住址:" << p->po[i].ads << endl;
	}
	cout << "请输入你要更改的联系人代号:";
	int l;
	cin >> l;
	string name;
	int sexc;
	int age;
	string phone;
	string ads;
	cout << "请输入姓名:" << endl;
	cin >> name;
	cout << "请选择性别:\n(1.男性;2.女性)" << endl;
	cin >> sexc;
	cout << "请输入年龄:" << endl;
	cin >> age;
	cout << "请输入电话:" << endl;
	cin >> phone;
	cout << "请输入地址:" << endl;
	cin >> ads;
	p->po[l-1].name = name;
	p->po[l-1].age = age;
	p->po[l-1].phone = phone;
	p->po[l-1].ads = ads;
	p->po[l-1].sex = (sexc == 1 ? "男" : "女");
	cout << "更改成功"<<endl;
	Sleep(1500);
	system("cls");
}
void clean(paper* p)
{
	system("cls");
	p->num = 0;
	cout << "清空成功!" << endl;
	Sleep(1500);
	system("cls");
}
int main()
{
	paper paper1;
	while (true)
	{
		sys();
		int c;
		cin >> c;
		if (c == 0) 
		{
			return 0;
		}
		else if(c==1)
		{
			add(&paper1);

		}
		else if (c == 2)
		{
			present(&paper1);
		}
		else if (c == 3)
		{
			del(&paper1);
		}
		else if (c == 4)
		{
			change(&paper1);
		}
		else if (c == 5)
		{
			clean(&paper1);
		}
	}
	
}