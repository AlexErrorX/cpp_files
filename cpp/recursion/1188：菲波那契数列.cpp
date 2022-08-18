#include<iostream>
#include<cstring>
using namespace std;
int n;
int a[100];
int suma[1000000]={0,1,1}; 
int main (){
  cin>>n;
  for(int i=2;i<=1000000;i++){
     suma[i]=(suma[i-1]+suma[i-2])%1000;//这里一定要
  }
  for(int i=0;i<n;i++){
    cin>>a[i];
    cout<<suma[a[i]];
    cout<<endl;
  }
   return 0;
}

