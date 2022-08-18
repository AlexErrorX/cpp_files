#include<iostream>
using namespace std;
void reverse(int n){
	if(n==0)
	return;
	int t=n%10;
	cout<<t;
	n=n/10;
	reverse(n);
}
int main (){
	int n;
	cin>>n;
	reverse(n);
	return 0;
}
