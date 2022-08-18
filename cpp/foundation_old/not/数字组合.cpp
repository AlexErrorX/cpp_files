#include<iostream>

using namespace std;
int main (){
	int n;
	cin>>n;
	for(int i=1;i<=n;i=i+2){
		for(int j=0;j<=n;j++){
			for(int k=1;k<=n;k++){
				if(i!=k&&k!=j&&i!=j){
					int t=i+j*10+k*100;
					cout<<t<<" ";
				}
			}
		}
	}
return 0;	
} 
