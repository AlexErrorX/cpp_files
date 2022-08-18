#include<iostream>

using namespace std;
int main (){
	int n,an;
	cin>>n;
	while (n!=1){
		if(n%2!=0){
		n=n*3+1;
		cout<<(n-1)/3<<"*3+1="<<n<<endl;
		}
		while(n%2==0){
		n=n/2;
		cout<<n*2<<"/"<<2<<"="<<n<<endl;
		
		}
		
	}
	cout<<"End";
	return 0;
}
