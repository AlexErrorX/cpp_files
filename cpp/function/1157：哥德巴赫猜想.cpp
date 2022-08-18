#include<iostream>
#include<cmath>
using namespace std;
int a[10001];
void is_NOprime(){
	for(int i=2;i<=sqrt(100);i++){
		if(a[i]==0){
			for(int j=2;j*i<=99;j++){
				a[i*j]=-1;
			}
		}
	}
}
int main (){
	is_NOprime();
	for(int i=6;i<=100;i+=2){
		for(int j=2;j<=i-1;j++){
			if(a[j]==0){
				if(a[i-j]==0){
					cout<<i<<"="<<j<<"+"<<i-j<<endl;
					break;
				}
			}
		}
	}
	return 0;
}
