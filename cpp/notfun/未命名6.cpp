#include<iostream>
using namespace std;
int main(){
	char a,b,c[100];
	cin>>c;
	cin>>a>>b; 
	char* p=c;
	while(*p){
		if(*p==a){
			*p=b;
		}
		p++;	
	}
	cout<<c;	
	return 0;
} 
