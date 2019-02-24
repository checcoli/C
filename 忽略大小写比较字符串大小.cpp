#include<iostream>
using namespace std;
int main() {
	char s1[80], s2[80];
	cin.getline(s1, 80);
	cin.getline(s2, 80);
	int i = 0;//因为i要在循环外使用，所以在此处定义循环变量
	for (; s1[i] != '\0'&&s2[i] != '\0'; i++)
	{
		if (s1[i] >= 'A'&&s1[i] <= 'Z')//如果字母为大写，统一转化为小写比较
			s1[i] += 32;
		if (s2[i] >= 'A'&&s2[i] <= 'Z')
			s2[i] += 32;
		if (s1[i] > s2[i])//比较当前字符的大小并判断
		{
			cout << '>';
			return 0;
		}
		else if (s1[i] < s2[i])
		{
			cout << '<';
			return 0;
		}
	}
	if (s1[i] == s2[i])//如果某一个字符串遇到\0，此时看谁先遇到则谁小
		cout << '=';
	else if (s1[i] == '\0')
		cout << '<';
	else
		cout << '>';
	return 0;
}