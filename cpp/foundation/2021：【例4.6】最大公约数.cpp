#include<iostream>
using namespace std;
int gcd(int m,int n)
{
   if(n==0)
     return m;
   return gcd(n,m%n);
}
int main (){
  int n,m;
  cin>>n>>m;
  cout<<gcd(n,m);
   return 0;
}
