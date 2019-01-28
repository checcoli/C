#include <iostream>
using namespace std;

int main(){
	int n,a[1000];//一共n个数，n不超过1000。a用来保存这些数
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	} 
	for (int i=0;i<n-1;i++){
		for(int j=1;j<n-i;j++){
			if (a[j-1]>a[j]){
				int temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
	}
	for (int i=0;i<n;i++){
		cout <<a[i];
	}
	return 0;
}
