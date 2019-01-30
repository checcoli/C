#include<iostream>
using namespace std;
int main() {
	int n, a[100];
	float t1 = 0.0, t2 = 0.0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];	
	}
	for (int i = 0; i < n; i++) {
    t1 = 27 + 23 + (a[i] / 3.0);
	t2 = a[i] / 1.2;
	if (t1 > t2) {
		cout << "Walk" << endl;
	}
	else if (t1 == t2) {
		cout << "All" << endl;
	}
	else {
		cout << "Bike" << endl;
	}
	}
	return 0;
	
}