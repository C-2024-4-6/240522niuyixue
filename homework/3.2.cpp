#include<iostream>
using namespace std;
const int MAX = 10000;
void find_prime(int);
//int main()
//{
//	int n = 0;
//	cout << "Ѱ��n���ڵ�����,������nֵ(������10000):";
//	cin >> n;
//	find_prime(n);
//	return 0;
//}
//����ɸ��,ʱ�临�Ӷ�ΪO(n)
void find_prime(int n)
{
	int step = 0;
	bool is_not_prime[MAX + 5] = {};//Ĭ�ϳ�ʼ��Ϊfalse
	int prime[MAX + 5];//��¼����
	int prime_num = 0;//��¼��������
	is_not_prime[0] = true;
	is_not_prime[1] = true;
	for (int i = 2; i <= n; i++)
	{
		if (!(is_not_prime[i])){
			prime[prime_num] = i;
			prime_num++;}
		for (int j = 0; j < prime_num && (i * prime[j]) <= n; j++)
		{
			is_not_prime[i * prime[j]] = true;
			if (i % prime[j] == 0)break;
		}
	}
	cout<< "�������: " << endl;
	int k = 0;
	for (int i = 2; i <= n; i++)
	{
		if (!(is_not_prime[i]))
		{
			cout << i << " ";
			k++;
			if (k % 10 == 0) cout << endl;
		}
	}
}