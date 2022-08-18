#include<iostream>

using namespace std;
int a[100]; 
int main (){
	int n;
	cin>>n;
	for(int i=0;i<=n-1;i++){
		cin>>a[i]; 
	}
	for(int i=0;i<=n-1;i++){
		cout<<a[i]; 
	}
} 
