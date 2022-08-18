#include<iostream>

using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=4;i<=n;i++){
		bool flag=false;//ÎªºÏÊý 
			for(int j=2;j<=i-1;j++){
			if(i%j==0){
				flag=true;
				break;
				
			}
			
		}
	if (flag==true){
		cout<<i<<" ";
		}
	} 
	return 0;
}
