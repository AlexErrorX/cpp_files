#include<iostream>
using namespace std;
int fib(int n){//It is fib stop 
	if(n==1 || n==2){
		return 1;
	}
	return fib(n-1)+fib(n-2);
}
int main (){
	cout<<fib(6); //1 1 2 3 5 8 23
	/*
	fib(6)=fib(5)+fib(4)
	fib(4)
	*/
	return 0;
} 
