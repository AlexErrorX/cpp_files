#include<iostream>

using namespace std;
int a[1000];
int main (){
	int n;
	cin>>n;
	for(int i=0;i<=n-1;i++){
		cin>>a[i];
	}
	int t=a[0];
	for(int i=1;i<=n-1;i++){
		a[i-1]=a[i] ;
	}
	a[n-1]=t;
	
	
	for(int i=0;i<=n-1;i++){
		cout<<a[i]<<" ";
	}
	return 0;
} 
