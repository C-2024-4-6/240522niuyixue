#include<iostream>
using namespace std;
//��������,ʱ�临�Ӷ�ΪO(log2 n)
int n;
int arrt[100];
void test3()
{
	cout << "����Ԫ�ظ���:" << endl;
	cin >> n;
	system("cls");
	for (int i = 0; i < n; i++)
	{
		cout << "�������" << i + 1 << "��Ԫ��:" << endl;
		cin >> arrt[i];
		system("cls");
	}
	cout << "��ָ��������Ϊ:";
	for (int i = 0; i < n; i++)
	{
		cout << arrt[i]<<" ";

	}
	cout << endl;
}
//void quicksort(int *p,int l,int s) 
//{
//	if (l < s)
//	{
//		int i, j, x;
//		i = l;
//		j = s;
//		x = p[l];//����ָ�������*pΪ��һ����*(p+l)Ϊ��l��������Ӧֵ
//		while (i < j)
//		{
//			while (i < j && (p[i] > x)) { j--; }//���������ҵ���һ��С��x����
//			if (i < j) { p[i++] = p[j]; }
//			while (i < j && (p[i] < x)) { i++; }//���������ҵ���һ������x����
//			if (i < j) { p[j--] = p[i]; }
//		}
//		p[i] = x;
//		//�ݹ����
//		quicksort(p, l, i - 1);
//		quicksort(p, i + 1, s);
//	}
//}
//void quicksort(int *p,int l,int s)//p�����ַ,l��ʼ��������,s���鳤��
//{
//	int i, j, x;
//	i = l;
//	j = s;
//	while (i < j)
//	{
//		//��i������ӦֵΪ��׼,��С���Ƶ�ǰ��,�����Ƶ�����,��ͬ��������
//
//	}
//}
//��������
void quicksort(int s[], int l, int r)
{
	if (l < r)
	{
		//Swap(s[l], s[(l + r) / 2]); //���м��������͵�һ��������
		int i = l, j = r, x = s[l];//�ڿ�,x��¼���ڿ�(��׼)��ֵ
		while (i < j)
		{
			while (i < j && s[j] >= x) // ���������ҵ�һ��С��x����
				j--;
			if (i < j)
				s[i++] = s[j];

			while (i < j && s[i] < x) // ���������ҵ�һ�����ڵ���x����
				i++;
			if (i < j)
				s[j--] = s[i];
		}
		s[i] = x;//���
		quicksort(s, l, i - 1); // �ݹ���� 
		quicksort(s, i + 1, r);
	}
}

//int main(){
//	test3();
//	quicksort(arrt, 0, n - 1);
//	//�������������
//	cout << endl;
//	cout << "��������Ľ��Ϊ:";
//	for (int i = 0; i < n; i++)
//	{
//		cout << arrt[i] << " ";
//	}
//	return 0;
//}