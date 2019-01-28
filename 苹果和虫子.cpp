#include <iostream>
using namespace std;
 
int main() {
	int n,x,y;
	cin>>n>>x>>y;
	int z=n-y/x;
	if (z<0){
		cout<<0;
	}else if (y%x==0){
	cout<<z;
	}
	else{
		cout<<z-1;
	}
	
	return 0;
	}
