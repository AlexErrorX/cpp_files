#include<iostream>
using namespace std;
int n;
int SH[10000];
int RF_fib(int a){
	if(a==1 || a==2)
		return 1;
	return RF_fib(a-1)+RF_fib(a-2);
}
int main (){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>SH[i];
	}
	for(int i=0;i<n;i++){
		cout<<RF_fib(SH[i])<<endl;
	}
	return 0;
}
