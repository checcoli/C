#include <iostream>
using namespace std;

int main()
{
	int n, m;
	int s[100];
	cin >> n >> m;
	int i, j, temp;
	for (i = 0; i < n; i++)cin >> s[i];

	for (i = 0; i < m; i++) {
		temp = s[n - 1];
		for (j = n - 1; j >= 0; j--)//在这里出错几次，注意下循环后移从n-1开始，j--，从0开始会出错》。
			s[j + 1] = s[j];
		s[0] = temp;
	}

	for (i = 0; i < n; i++)cout << s[i] << ' ';
	cout << endl;
	return 0;
}
