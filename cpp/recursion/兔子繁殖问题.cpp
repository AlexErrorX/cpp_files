#include<iostream> 
using namespace std;
int r(int n){
if(n==1){
	return 0;
}else if(n==2){
	return 1;
}
return r(n-1)+r(n-2);
}
int main  (){
	int n;
	cin>>n;
	cout<<r(n); 
	return 0;
} 
