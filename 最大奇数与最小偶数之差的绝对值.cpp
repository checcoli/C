#include <iostream>
using namespace std;
int main(){
	int n=0,a[5],b[5],c[5],i=0,j=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			int x=0;
			int b[x]=a[i];
			x++;	
		}
		else{
			int y=0;
			int c[y]=a[i];
			y++;
		}
	}
	for(int i=0;i<x-1;i++){
		for(int j=1;j<x-i;j++){
			if (b[j-1]>b[j]){
				int tempt=b[j-1];
				b[j-1]=b[j];
				b[j]=tempt;
			}
		}
	}
	for(int i=0;i<y-1;i++){
		for(int j=1;j<y-i;j++){
			if (c[j-1]>c[j]){
				int tempt=c[j-1];
				c[j-1]=c[j];
				c[j]=tempt;
			}
		}
	}
	int z=c[y-1]-b[0];
	if(z<0){
		cout<<0-z;
}else{
	cout<<z;
}
	return 0;
}
