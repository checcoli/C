#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int n = 1;
	float a1 = 0, a19 = 0, a36 = 0, a60 = 0;
	int age[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> age[i];
		if (age[i] > 0 && age[i] < 19) {
			a1++;
		}
		else if (age[i] > 18 && age[i] < 36) {
			a19++;
		}
		else if (age[i] > 35 && age[i] < 60) {
			a36++;
		}
		else if (age[i] == 60) {
			a36++;
			a60++;
		}
		else {
			a60++;
		}
	}
	cout << "1-18:" << fixed << setprecision(2) << 100*a1 / n << '%' << endl;
	cout << "19-35:" << fixed << setprecision(2) << 100*a19 / n << '%' << endl;
	cout << "36-60:" << fixed << setprecision(2) << 100*a36 / n << '%' << endl;
	cout << "60-:" << fixed << setprecision(2) << 100*a60 / n << '%';
		return 0;

}
