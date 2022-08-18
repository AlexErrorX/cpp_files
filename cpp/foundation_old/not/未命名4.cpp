#include<iostream>

using namespace std;
int a[1000],n;
int main (){
		cin>>n;
		for(int i=0;i<=n-1;i++)
		cin>>a[i];
		for(int i=0;i<=n-2;i++){
			bool flag=true;//每一轮假设 
			for(int j=0;j<=n-2-i;j++){
				if(a[j]<a[j+1]){
					flag=false;      
					swap(a[j],a[j+1]);
				}
			}
			if(flag){
				break;//不用比较 
			}
		}
		for(int i=0;i<=n-1;i++)
		cout<<a[i]<<" ";
	return 0;
}
