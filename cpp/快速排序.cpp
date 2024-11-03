#include<iostream>
using namespace std;
//快速排序,时间复杂度为O(log2 n)
int n;
int arrt[100];
void test3()
{
	cout << "输入元素个数:" << endl;
	cin >> n;
	system("cls");
	for (int i = 0; i < n; i++)
	{
		cout << "请输入第" << i + 1 << "个元素:" << endl;
		cin >> arrt[i];
		system("cls");
	}
	cout << "你指定的数组为:";
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
//		x = p[l];//数组指针解引用*p为第一个数*(p+l)为第l个索引对应值
//		while (i < j)
//		{
//			while (i < j && (p[i] > x)) { j--; }//从右向左找到第一个小于x的数
//			if (i < j) { p[i++] = p[j]; }
//			while (i < j && (p[i] < x)) { i++; }//从左向右找到第一个大于x的数
//			if (i < j) { p[j--] = p[i]; }
//		}
//		p[i] = x;
//		//递归调用
//		quicksort(p, l, i - 1);
//		quicksort(p, i + 1, s);
//	}
//}
//void quicksort(int *p,int l,int s)//p数组地址,l起始排序索引,s数组长度
//{
//	int i, j, x;
//	i = l;
//	j = s;
//	while (i < j)
//	{
//		//以i索引对应值为基准,将小数移到前面,大数移到后面,相同的数任意
//
//	}
//}
//快速排序
void quicksort(int s[], int l, int r)
{
	if (l < r)
	{
		//Swap(s[l], s[(l + r) / 2]); //将中间的这个数和第一个数交换
		int i = l, j = r, x = s[l];//挖坑,x记录所挖坑(基准)数值
		while (i < j)
		{
			while (i < j && s[j] >= x) // 从右向左找第一个小于x的数
				j--;
			if (i < j)
				s[i++] = s[j];

			while (i < j && s[i] < x) // 从左向右找第一个大于等于x的数
				i++;
			if (i < j)
				s[j--] = s[i];
		}
		s[i] = x;//填坑
		quicksort(s, l, i - 1); // 递归调用 
		quicksort(s, i + 1, r);
	}
}

//int main(){
//	test3();
//	quicksort(arrt, 0, n - 1);
//	//输出排序后的数组
//	cout << endl;
//	cout << "快速排序的结果为:";
//	for (int i = 0; i < n; i++)
//	{
//		cout << arrt[i] << " ";
//	}
//	return 0;
//}