#include<iostream>
using namespace std;
int RSfib(int n){
	if(n==1 || n==2){//如果肺部垃圾的数到达一或者二时，就回溯 
		return 1;
	}
	return RSfib(n-1)+RSfib(n-2);	
} 
int main (){
	cout<<RSfib(5);
	return 0;
} 
