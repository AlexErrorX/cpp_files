#include<iostream>
#include<cmath>
using namespace std;
int RSn(int n){
	if(n==1){
		return 1;
	}
return RSn(n-1)*(n);
	
	//return n*RSn(n-1); 
	
}
int main (){
	cout<<RSn(5);
	return 0;
} 
