#include <iostream>
using namespace std;
int main()
{
	char s[500] = { 0 };
	cin.getline(s, 500);
	int count = 0;       //count������¼���ʵĳ���
	int count_max = 0;   //count_max������¼����ʵĳ���
	int end = 0;
	int i = 0;//end������¼����ʵ�ĩβλ��
	while (i < 500)
	{
		if (s[i] != ' '&& s[i] != '.' && s[i] != '\0')
		{
			count++;
			if (count > count_max)
			{
				count_max = count;
				end = i;
			}
			i++;
		}
		if (s[i] == ' ')
		{
			count = 0;
			i++;
		}
		if (s[i] == '.' || s[i] == '\0')
		{
			break;
		}
	}
	for (int i = end - count_max + 1; i < end + 1; i++)
	{
		cout << s[i];
	}
	return 0;
}


