#include<iostream>

using namespace std;
int a[20][20];
int n;
int main (){
	cin>>n;	
	cout<<1<<endl;
	for(int i=2;i<=n;i++){
		for(int j=1;j<=i;j++){
			a[i][j]=(a[i-1][j])+(a[i-1][j+1]);
			cout<<a[i][j];
		}
		cout<<endl;
	}
	return 0;
}
