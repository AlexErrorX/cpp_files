#include<iostream>

using namespace std;
bool flag =false;
int a[5][5];
void am (){
		for(int i=0;i<=5-1;i++){
		for(int j=0;j<=5-1;j++){
		cin>>a[i][j];
		}
	}
	for(int i=0;i<=5-1;i++){
		int MAX=0;	
		for(int j=1;j<=5-1;j++){
			if(a[i][MAX]<=a[i][j]){
				MAX=j;
			}
		}
		int MINT=i;
		for(int k=0;k<=4;k++){
			if(a[MINT][MAX]>a[k][MAX]){
				MINT=k;
			}
		}
		if(i==MINT){
			flag =true;
			cout<<i+1<<" "<<MAX+1<<" "<<a[i][MAX]<<endl;
		}
	}
	if(flag==false){
		cout<<"not found";
	}
}
int main (){

am();

return 0;
}


