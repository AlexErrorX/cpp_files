#include<iostream>
#include<cstring>
using namespace std;
int n;
int p[100],q[100];
int gbs=1;
int totfz;
int ansgcd;
int gcd(int m,int n)
{
   if(n==0)
     return m;
   return gcd(n,m%n);
}
int lcm(int m,int n)
{
   return m*n/gcd(m,n);
}
int main (){
  cin>>n;
  for(int i=0;i<n;i++)
  {
     scanf("%d/%d",&p[i],&q[i]);
     gbs=lcm(gbs,q[i]);//全部的最小公因数
  }
  for(int i=0;i<n;i++)
  {
    p[i]=p[i]*(gbs/q[i]);  
  }
  for(int i=0;i<n;i++)
  {
     cout<<p[i];
  }
  cout<<endl;
  printf("%d/%d",ansgcd,gbs);
 
   return 0;
}
