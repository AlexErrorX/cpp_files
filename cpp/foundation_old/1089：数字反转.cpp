#include<iostream>

using namespace std;
int main (){
	int n;
	cin>>n;
	if (n<0){
		n*=-1;
		cout<<"-";
	}
	while (n%10==0){
		n/=10;
	}
	while (n!=0){
		int t=n%10;
		n=n/10;
		cout<<t;
	}

} 
