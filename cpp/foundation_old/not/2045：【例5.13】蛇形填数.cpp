#include<iostream>

 using namespace std;
 int a[20][20],n,i=0,j,t;
 int main (){
 	cin>>n;
 	j=n-1;
 	t=1;
 	a[i][j]=t;
 	while(t<n*n){
 		while(a[i+1][j]==0 &&i+1<=n-1)
 			a[++i][j]=++t;
 		while(a[i][j-1]==0 &&j-1>=0)
 			a[i][--j]=++t;
 		while(a[i-1][j]==0 &&i-1>=0)
 			a[--i][j]=++t;
 		while(a[i][j+1]==0 )
 			a[i][++j]=++t;
	 }
	 
	 for(int i=0;i<=n-1;i++){
	 	for(int j=0;j<=n-1;j++){
	 		cout<<a[i][j]<<" ";
		 }
		 cout<<endl;
	 }
 	return 0;
 }
