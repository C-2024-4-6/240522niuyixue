#include<iostream>
#include<string>
using namespace std;
void solve(int n,int s,int m,int e)//n:盘子总数 s:起始位 m:辅助位 e:终点位
{
	string position[] = { "null","A","B","C" };
	if (n == 1)
	{
		cout << position[s] << " -> " << position[e]<<endl;
	}
	else
	{
		solve(n - 1, s, e, m);//以C为辅助,将A上面n-1个盘子移到B
		cout << position[s] << " -> " << position[e]<<endl;//将起始位剩下的一个盘子移到C
		solve(n - 1, m, s, e);//问题转换为n-1个盘子,且起始位与辅助位互换
		n--;

	}
}
//int main()
//{
//	solve(10, 1, 2, 3);
//	return 0;
//}