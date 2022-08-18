#include<iostream>

using namespace std;
int a[10];
int main(){
	int ans=0;
	for(int i=0;i<=9;i++){
		cin>>a[i];
	}
	int b;
	cin>>b;
	for(int i=0;i<=9;i++){
		if((b+30)>=a[i]){
			ans++;
		}
	}
	cout<<ans;
	
}

