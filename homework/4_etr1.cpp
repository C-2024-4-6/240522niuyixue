#include<iostream>
using namespace std;
int indexOf(const char* s1, const char* s2)
{
	bool get = false;
	const char* first = s1;
	const char* p3;
	int index0(0);
	while (*s2 != '\0' && !get)
	{
		if (*first == *s2) {
			s1 = first ; p3 = s2;
			while (true)
			{
				if (*s1 == '\0' || *p3 == '\0') break;
				else if (*s1++ == *p3++) { get = true; continue; }
				else { get = false; break; }
			}
		}
		s2++;
		if (!get) index0++;
	}
	return get ? index0 : -1;
}
void etr1()
{
	char s1[500], s2[500];
	cout << "请输入第一个字符串: ";
	cin.getline(s1, 500);
	cout << "请输入第二个字符串: ";
	cin.getline(s2, 500);
	cout << "the index of( " << s1 << " in " << s2 << " )is " << indexOf(s1, s2);
}
//int main()
//{
//	etr1();
//	return 0;
//}