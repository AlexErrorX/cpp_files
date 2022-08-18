#include<iostream>

using namespace std;
int a[1000][3],n,m;
int t;
int ans;
int main (){
	cin>>n>>m;
	for(int i=0;i<=n-1;i++){
		for(int j=0;j<=m-1;j++){
			cin>>t;
			if(t!=0){
			a[ans][0]=i+1;
			a[ans][1]=j+1;
			a[ans++][2]=t;	
			}
		}
	}
	for(int i=0;i<=ans-1;i++){
		cout<<a[i][0]<<" ";
		cout<<a[i][1]<<" ";
		cout<<a[i][2]<<endl;
	}
	return 0;
}
