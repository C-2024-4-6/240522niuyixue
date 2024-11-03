#include<iostream>
using namespace std;
const int MAX = 10000;
void find_prime1(int);
void find_prime2(int);
int main()
{
	int n = 0;
	cout << "Ѱ��n���ڵ�����,������nֵ(������10000):";
	cin >> n;
	find_prime1(n);
	find_prime2(n);
	return 0;
}
//����ɸ��,ʱ�临�Ӷ�ΪO( n*ln(ln(n)) )
void find_prime1(int n)
{
	int step = 0;

	bool is_prime[MAX + 5];
	is_prime[2] = true;//2Ϊ����
	for (int i = 2; i <= n; i++)
	{
		for (int j = 2; i * j <= n; j++)//ͨ�����˲����޳�����
		{
			is_prime[i * j] = false;
			step++;
		}
	}
	cout << "����ɸ��: ��" <<step<<"��,�������" << endl;
	for (int i = 2; i <= n; i++)
	{
		if (is_prime[i])
		{
			cout << i << " ";
		}
	}
	cout << endl;
}
//����ɸ��,ʱ�临�Ӷ�ΪO(n),ÿ������ֻ���һ��,�Ӷ���ʡʱ��
void find_prime2(int n)
{
	int step = 0;
	bool is_not_prime[MAX + 5] = {};//Ĭ�ϳ�ʼ��Ϊfalse
	int prime[MAX + 5];//��¼����
	int prime_num = 0;//��¼��������
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
	cout << "����ɸ��: ��" << step << "��,�������" << endl;
	for (int i = 2; i <= n; i++)
	{
		if (!(is_not_prime[i]))
		{
			cout << i << " ";
		}
	}
}