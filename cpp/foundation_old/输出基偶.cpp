#include<iostream>

using namespace std;
int main(){
	int n,ans=0,bns=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%2==0){
			ans=ans+i;
			
		}else if(i%2!=0){
			bns=bns+i;
			
		}
		
	}
	cout<<ans<<" "<<bns;
	return 0;
}