#include<iostream>
using namespace std;
int is_yin(int n){
	int sum=0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			sum+=n;
		}
	}
	return sum;
} 
int main (){
	int a,b;
	for(int i=2;;i++){
		a=i;
		b=is_yin(i);
		if(a!=b && is_yin(b)==a){
			if(a>b){
				cout<<a<<" "<<b;
			}else{
				cout<<b<<" "<<a;
			}
				break;
			}
		}
			return 0;
			
	}
	
	 


