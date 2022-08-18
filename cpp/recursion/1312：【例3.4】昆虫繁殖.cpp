#include<iostream>
using namespace std;
long x,y,z;
long long a[100],b[100];//存储z月份的成虫和幼虫
int main (){
  cin>>x>>y>>z;
  for(int i=1;i<=x;i++)
  {
     a[i]=1;
     b[i]=0;
  }
  for(int i=x+1;i<=z+1;i++)
  {
     b[i]=y*a[i-x];//幼虫数=上个月的成虫*一个成虫的产量
     a[i]=a[i-1]+b[i-2];//成虫数=上个成虫+长成的幼虫
  }
  cout<<a[z+1];
  cout<<endl;
   return 0;
}
