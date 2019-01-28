#include <iostream>
using namespace std;
int main(){
	int n,a[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		}
	for(int i=0;i<n-1;i++){
		for(int j=1;j<n-i;j++){
			if (a[j-1]>a[j]){
				int tempt=a[j-1];
				a[j-1]=a[j];
				a[j]=tempt;
				
			}
		}
	}
	cout<<a[n-1];
	return 0;
}
