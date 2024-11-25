#include<iostream>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	bool get = false;
	const char* p1;
	const char* p2;
	const char* p3;
	p2 = s2;
	int index0(0);
	while (*p2 != '\0' && !get)
	{
		if (s1[0] == *p2) {
			p1 = s1;p3 = p2;
			while (true)
			{				
				if (*p1 == '\0' || *p3 == '\0') break;
				else if (*p1++ == *p3++) { get = true; continue; }
				else { get = false; break; }
			}
		}
		p2++;
		if (!get) index0++;
	}
	return get ? index0 : -1;
}
void test45()
{
	char s1[500], s2[500];
	cout << "请输入第一个字符串: ";
	cin.getline(s1,500);
	cout << "请输入第二个字符串: ";
	cin.getline(s2, 500);
	cout <<"the index of( " << s1 << " in " << s2 << " )is " << indexOf(s1, s2);
}
//int main()
//{
//	test45();
//	return 0;
//}