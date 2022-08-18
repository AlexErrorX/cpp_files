#include<iostream>

int a[1001];
int main (){
	int n,r,l=0;
	cin>>n;
	r=n-1;
	for(int i=0;i<=n-1;i++){
		cin>>a[i];
	}
	while(l<r){
		swap(a[l],a[r]);
		l++;
		r--;
	}
	for(int i=0;i<=n-1;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
	
}Ctrl+/



