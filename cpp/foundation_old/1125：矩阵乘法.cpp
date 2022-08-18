#include<iostream>
using namespace std;
int n,m,k;
int A[101][101];
int B[101][101];
int Cans[101][101]; 
int main(){
	cin>>n>>m>>k;
	for(int i=0;i<=n-1;i++){
		for(int j=0;j<=m-1;j++){
			cin>>A[i][j];
		}
	}
	for(int i=0;i<=m-1;i++){
		for(int j=0;j<=k-1;j++){
			cin>>B[i][j];
		}
	}
	//C[i][j] = A[i][0]¡ÁB[0][j] + A[i][1]¡ÁB[1][j] + ¡­¡­ +A[i][m-1]¡ÁB[m-1][j]
	for(int i=0;i<=n-1;i++){
		for(int j=0;j<=k-1;j++){
			for(int l=0;l<=k-1;l++){
				Cans[i][j]+=(A[i][l]*B[l][j]);
			}
		}
	}
	for(int i=0;i<=n-1;i++){
		for(int j=0;j<=k-1;j++){
		cout<<Cans[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
