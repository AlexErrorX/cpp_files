#include<iostream>

using namespace std;
int a[100];
int main (){
	a[0]=1;
	a[1]=1;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		a[i]=a[i-1]+a[i-2];
	}
	for(int i=0;i<=n;i++){
		cout<<a[i]<<" ";
		
	}
 }

