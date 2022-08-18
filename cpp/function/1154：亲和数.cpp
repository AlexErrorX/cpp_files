#include<iostream>
using namespace std;
int n;
int yz(int n)
{
  int sum=0;
   for(int i=1;i<n;i++)
   {
     if(n%i==0) 
       sum+=i;
   }
   return sum;
}
int main (){
 
  for(int i=2;;i++)
  {
    int a=i;
    int b=yz(i);
       if(a<b && a==yz(b))
       {
          cout<<a<<" "<<b;
          break;
       }
  }
   return 0;
}
