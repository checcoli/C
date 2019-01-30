#include<iostream>
using namespace std;
int main() {
	int n, k, a[1000], i = 0, j = 0;
	int sum = a[i] + a[j];
	bool exist = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (i = 0; i < n; i++) {
		for (j = i+1; j < n; j++) {
			sum = a[i] + a[j];
			if (sum == k) {
				exist = 1;
				
				break;
			}
		}
	}if(exist){cout << "yes";}
	else { cout << "no"; }
	return 0;
	}
	