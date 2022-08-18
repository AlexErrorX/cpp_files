#include<iostream>
using namespace std;
//100-999
int is_prime(int a){
	for(int i=2;i<a;i++){
		if(a%i==0){
			return true;
		}
	}
	return false;
}
int is_huiwen(int a){
	int l=a/100;
	int r=a%10;
		if(r!=l){
			return false;
		}
	return true;
} 
int main (){
	for(int i=100;i<1000;i++){
		if(is_prime(i)==false && is_huiwen(i)==true){
			cout<<i<<endl;
		}
	}
	return 0;
} 
