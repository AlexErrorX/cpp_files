#include<iostream>
using namespace std;
int Rs(int n){//13!=12!+13
	if(n==true){
		return n;
	}
	return n+Rs(n-1);
}
int main (){
	int n;
	cin>>n;
	cout<<Rs(n);
} 
