#include<iostream>
using namespace std;
void fun(int n,int m){
	if(n==0)
		return;
	int t=n%m;
	fun(n/m,m);
	if(t>=10&&m<=16){
		cout<<char('A'+(t-10));
	}else{
		cout<<t;
	}
	
	
}
int main (){
	int n;
	int x;
	cin>>n>>x;
	fun(n,x);
	return 0;
} 
