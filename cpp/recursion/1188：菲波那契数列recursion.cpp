#include<iostream>
using namespace std; 
int a[1000000]={0,1,1}; int x=1;
int main (){
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
     int t;
     cin>>t;
    if(a[t]==0) //如果a[t]没有求过
    {
       for(int j=x+1;j<=t;j++)//从x+1开始，计算fib
       {
          a[j]=(a[j-1]+a[j-2])%1000;
       }
       x=t;//记录fib开始
    }
    cout<<a[t]<<endl;
  }
   return 0;
}
