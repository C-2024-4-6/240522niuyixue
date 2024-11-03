#include<iostream>
using namespace std;
const int MAX = 10000;
void find_prime1(int);
void find_prime2(int);
int main()
{
	int n = 0;
	cout << "寻找n以内的质数,请输入n值(不超过10000):";
	cin >> n;
	find_prime1(n);
	find_prime2(n);
	return 0;
}
//埃氏筛法,时间复杂度为O( n*ln(ln(n)) )
void find_prime1(int n)
{
	int step = 0;

	bool is_prime[MAX + 5];
	is_prime[2] = true;//2为质数
	for (int i = 2; i <= n; i++)
	{
		for (int j = 2; i * j <= n; j++)//通过倍乘操作剔除合数
		{
			is_prime[i * j] = false;
			step++;
		}
	}
	cout << "埃氏筛法: 共" <<step<<"步,结果如下" << endl;
	for (int i = 2; i <= n; i++)
	{
		if (is_prime[i])
		{
			cout << i << " ";
		}
	}
	cout << endl;
}
//线性筛法,时间复杂度为O(n),每个合数只标记一次,从而节省时间
void find_prime2(int n)
{
	int step = 0;
	bool is_not_prime[MAX + 5] = {};//默认初始化为false
	int prime[MAX + 5];//记录质数
	int prime_num = 0;//记录质数数量
	is_not_prime[0] = true;
	is_not_prime[1] = true;
	for (int i = 2; i <= n; i++)
	{
		if (!(is_not_prime[i]))
		{
			prime[prime_num] = i;
			prime_num++;
		}
		for (int j = 0; j < prime_num && (i * prime[j]) <= n; j++)
		{
			is_not_prime[i * prime[j]] = true;
			step++;
			if (i % prime[j] == 0)
			{
				break;
			}
		}
	}
	cout << "线性筛法: 共" << step << "步,结果如下" << endl;
	for (int i = 2; i <= n; i++)
	{
		if (!(is_not_prime[i]))
		{
			cout << i << " ";
		}
	}
}