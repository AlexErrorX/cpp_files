#include<iostream>

using namespace std;
int a[100000];
int main (){
	int max=0,len=1;
	int n;
	cin>>n;
	for(int i=0;i<=n-1;i++){
		cin>>a[i];
		
	}
	for(int i=0;i<=n-1;i++){
		if(a[i]!=a[i-1]){
			if(max<len){
				max=len;
			}
			len=1;
		}
		else{
			len+=1;
		}	

	}
	if(max<=len){
		max=len;
	}	
	cout<<max;
	return 0;
}
