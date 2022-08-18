#include<iostream>
#include<cmath>
using namespace std;

int wan(int n){
	int sum=0;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			sum+=i+n/i;
		}
	}
	sum-=n;
	return sum;
}
int main (){
	 int n;
	 cin>>n;
	 for(int i=2;i<=n;i++){
	 	if(wan(i)==i){
	 		cout<<i<<endl;
		 }
	 }
	return 0;
}
