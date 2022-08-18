#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int a[4]; 
int main (){
	for(int i=0;i<3;i++){
		cin>>a[i];
	}
	for(int i=1;i<3;i++){
		for(int j=0;j<=3-i-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		} 
	}
	for(int i=0;i<3;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}

