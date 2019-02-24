#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int id, n;
	char b[3] = { 'A','B','C' };
	float numa = 0, numb = 0, numc = 0, a[3] = {};
	for (int i = 0; i < 3; i++) {
		cin >> id >> n;
		char type;
		float num;
		for (int j = 0; j < n; j++) {
			cin >> type >> num;
			a[id-1] += num;
			switch (type)
			{case'A':
				numa += num;
				break;
			case'B':
				numb += num;
				break;
			case'C':
				numc += num;
				break;
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << ' ' << fixed << setprecision(2) << a[i] << endl;
	}
	cout << b[0] << ' ' << fixed << setprecision(2) << numa << endl;
	cout << b[1] << ' ' << fixed << setprecision(2) << numb << endl;
	cout << b[2] << ' ' << fixed << setprecision(2) << numc << endl;
	return 0;
}