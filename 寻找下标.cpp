#include<iostream>
using namespace std;
int main() {
	int x[100], n, num=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	for (int i = 0; i < n; i++) {
		if (x[i] == i) {
			cout << i;
			break;
		}
		else { num++; }
	}
	if (num == n) {
		cout << 'N';
	}
	return 0;
}