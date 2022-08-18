#include<iostream>
using namespace std;
int su(int n){
	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true; 
}
int main (){
	int n,sum=0;
	cin>>n;
	for(int i=2;i<=n;i++){
		if(su(i)==true){
			sum++;
		} 
	}
	cout<<sum<<endl;
	return 0;
}
