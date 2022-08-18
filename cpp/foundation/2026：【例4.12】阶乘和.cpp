
//提示运行错误（time
#include<iostream>
using namespace std;
int fc(int x)
{
   if(x==1)
     return 1;
   return fc(x-1)*x;
}
int f(int n)
{
   if(n==1)
     return 1;
   return f(fc(n-1))+fc(n);
}
int main(){
  int n;
  cin>>n;
  cout<<f(n);
   return 0;
}
