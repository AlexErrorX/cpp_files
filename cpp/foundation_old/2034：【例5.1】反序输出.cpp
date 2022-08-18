#include<iostream>

using namespace std;
int a[100];
int main (){
/*	int n;
	cin>>n;
	for(int i=0;i<=n;i++){
		cin>>a[i];*/
	int n=0;
	while (cin>>a[n]){//ctrl+zÊÇ¶ÁÈ¡½áÊø 
		n++;
	}
	
	for(int i=n-1;i>=0;i--){
		cout<<a[i]<<" ";
	}
	return 0;
}
