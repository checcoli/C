#include<iostream>
using namespace std;
int main(){
	int m=0;
	cin>>m;
	int a=m/100;
	int b=(m-100*a)/10;
	int c=m-100*a-10*b;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	return 0;
	
}
