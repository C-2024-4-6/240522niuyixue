#include<iostream>
using namespace std;
static void test01()
{
	//数组中不能放置变量
	int arr1[10] = { 0,1,2,3 };//一维数组部分赋值
	//元素名表示首元素地址,一维数组对应下标元素地址 = 首地址 + 下标 * 元素类型对应字节大小

	int arr2[2][3] = { {1,2,3},{4,5,6} };//arr[行][列]
	int arr3[2][3] = { 1,2,3,4,5,6 };//同上
	int arr4[][3] = { 1,2,3,4,5,6 };//若通过元素可以确定行数，行数可省略
	int arr5[3][4] = { {1,2,3},{},{4,5} };//对部分行部分元素初始化,其余元素默认为0
	int arr6[][4] = { {5},{},{},{4},{} };//此时可省略行数5
	//arr[i][j]地址 = 二维数组起始地址(arr[0][0])+(i*列数+j)*sizeof(数组类型)
}
void sum(int a[],int n)//数组作形参时一般不指定数组个数,而用另一个参数指定
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}
	cout << sum<<endl;
}
void buychickens();//此为上课写的
void test03()
{
	int n = 0;
	float sum[100];
	for (int i = 0; i < 100; i++)
	{
		float a = 0;
		cout << "第" << i + 1 << "个成绩:";
		cin >> a;
		sum[i] = a;
		if (a < 0) { break; }
		n += 1;
	}
	for (int j = n - 1; j > 0; j--)
	{
		for (int i = 0; i < j; i++)
		{
			if (sum[i] < sum[i + 1])
			{
				swap(sum[i], sum[i + 1]);
			}
		}
	}
	cout << "从大到小排序为: ";
	for (int i = 0; i < n; i++)
	{
		cout << sum[i] << " ";
	}

}
//int main()
//{
//	buychickens();
//	test01();
//	int a[5] = { 1,2,3,4,5 };
//	sum(a,5);//传入数组名,即首地址
//	sum(&a[2],3);//传入第3个元素地址,将第3个元素作为首元素
//	test03();
//	return 0;
//}
void buychickens()
{
	int money, n = 0;
	cout << "请输入money" << endl;
	cin >> money;
	for (int i = 1; i <= 20; i++)
	{
		for (int k = 0; k <= 33; k++)
		{
			for (int j = 0; j <= 100; j += 3)
				if (i * 5 + k * 3 + j / 3 == 100)
				{
					cout << "鸡翁: " << i << endl;
					cout << "鸡婆: " << k << endl;
					cout << "鸡雏: " << j << endl;
					cout << endl;
					n++;

				}
		}
	}
	cout << "共有" << n << "种情况" << endl;
}