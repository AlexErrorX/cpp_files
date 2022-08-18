#include<iostream>
#include<cstring>
using namespace std;
char a[100];
int r,l=0;
int main (){
	cin>>a;
	int len=strlen(a)-1;	
	r=len-1;
	while (l<r){
		if(a[l]!=a[r]){
			cout<<"No";
			return 0;
		}
		l++;
		r--;
		
	}
	cout<<"Yes";
	return 0;
}

