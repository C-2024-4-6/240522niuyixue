#include<iostream>
using namespace std;
void monkey(int lastday,int lastpeach)
{
	if(lastday>0)
	{
		cout << "��" << lastday << "����ӳ����ʣ��" << lastpeach << "������" << endl;
		lastpeach = (lastpeach + 1) * 2;
		lastday--;
		monkey(lastday, lastpeach);
	}
	else {
		cout << "�����" << lastpeach << "������" << endl;
	}

}
//int main()
//{
//	monkey(9,1);
//	return 0;
//}