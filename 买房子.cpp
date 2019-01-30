#include<iostream>
using namespace std;
int main() {
	int N, K, M, money = 0;
	
	while (cin >> N >> K) {float price = 200;
		for (M = 1; M <= 20; M++) {
			money = M * N;
			if (money >= price) {
				cout << M;
				break;
			}
			else {
				price = price * (100 + K) / 100;
			}

		}
		if (money < price) {
			cout << "Impossible";
		}
	}
	return 0;
}