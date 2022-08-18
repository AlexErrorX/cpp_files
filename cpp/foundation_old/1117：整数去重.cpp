#include<iostream>

using namespace std;
int a[20000];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<=n-1;i++){
	cin>>a[i];	
	}
	for(int i=0;i<=n-1;i++){
		if(a[i]>0){
		for(int j=i+1;i<=n-1;i++){
			if(a[i]==a[j]){
				a[j]=-1;
			}
		}
	}
	}
	for(int i=0;i<=n-1;i++){
		if(a[i]>0){
			cout<<a[i]<<" ";
		}
	}
	
	return 0;
}
