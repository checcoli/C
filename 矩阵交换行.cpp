#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int a[5][5];
	int b[5];
	int n, m;
	for (int c = 0; c < 5; c++) {
		for (int d = 0; d < 5; d++) {
			cin >> a[c][d];
		}
	}
	cin >> n >> m;
	if (0 <= n <= 4 && 0 <= m <= 4) {
		for (int i = 0; i < 5; i++) {
			b[i] = a[n][i];
			a[n][i] = a[m][i];
			a[m][i] = b[i];

		}
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				cout << setw(4) << a[i][j];
			}
			cout << endl;
		}
	}
	else {
		cout << "error" << endl;
	}
	return 0;
}