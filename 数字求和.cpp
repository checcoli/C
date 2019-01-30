#include<iostream>
using namespace std;
int main() {
	int a, b[5], temp=0;
	cin >> a;
	for (int i = 0; i < 5; i++) {
		cin >> b[i];
		if (b[i] < a) {
			temp += b[i];
		}
	}
	cout << temp;
	return 0;
}