#include<iostream>

using namespace std;
int main (){
	int n,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int j=i;//ÁÙÊ±´æ´¢ 
		while(j){
			int t=j%10;
			j/=10;
			if(t==1){
				ans++;
				
			}
		}
	}
	cout<<ans;
}
