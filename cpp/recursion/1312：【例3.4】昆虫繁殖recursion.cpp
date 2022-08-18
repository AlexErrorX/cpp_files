#include<iostream>
using namespace std;
int x,y,z;
long long recursion(int n)
{
   if(n<=2+x)//在幼虫成长前都只有一只成虫
     return 1;
   return recursion(n-1)+recursion(n-x-2)*y;//成虫=之前的成虫+成长后的幼虫
}
int main (){
  cin>>x>>y>>z;
  cout<<recursion(z+1);
   return 0;
}
