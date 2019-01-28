#include <iostream>
using namespace std;
int main(){
	int h=0,r=0;
	cin>>h>>r;
	float v=3.14159*r*r*h;
	int n=20000/v;
	cout<<n+1;
	return 0;
	
}

