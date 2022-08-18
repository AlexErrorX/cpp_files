#include<iostream>

using namespace std;
int a[100];
int main (){
	int n,m,ans=0;
	cin>>n;
	for(int i=0;i<=n-1;i++){
		cin>>a[i];
	}
	cin>>m;
	for(int i=0;i<=n-1;i++){
		if(a[i]==m){
			ans++;
		}
	}
	cout<<ans;
	
	
	return 0;
}
