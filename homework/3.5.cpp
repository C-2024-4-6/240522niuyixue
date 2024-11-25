#include<iostream>
using namespace std;
void monkey(int lastday,int lastpeach)
{
	if(lastday>0)
	{
		cout << "第" << lastday << "天猴子吃完后剩余" << lastpeach << "个桃子" << endl;
		lastpeach = (lastpeach + 1) * 2;
		lastday--;
		monkey(lastday, lastpeach);
	}
	else {
		cout << "起初有" << lastpeach << "个桃子" << endl;
	}

}
//int main()
//{
//	monkey(9,1);
//	return 0;
//}