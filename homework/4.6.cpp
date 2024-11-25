#include<iostream>
using namespace std;
void count(const char s[], int counts[])
{
	const char* p = s;
	while (*p != '\0')
	{
		int n = int(*p);
		if (n >= 97 && n <= 122) counts[n - 97] ++; 
		else if (n >= 65 && n <= 90) counts[n - 65] ++; 
		p++;
	}
}
void test46()
{
	char s[1000];
	int counts[26] = {};
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û´®: ";
	cin.getline(s, 1000);
	count(s, counts);
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] > 0) {
			cout << char(i + 97) << ": " << counts[i] << "times" << endl;
		}
	}
}
//int main()
//{
//	test46();
//	return 0;
//}