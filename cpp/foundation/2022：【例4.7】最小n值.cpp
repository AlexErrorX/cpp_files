#include<iostream>
using namespace std;
int main(){
  double m,s=0,i;
  cin>>m;
  for(i=1;s<m;i++)
    s+=1/i;
  cout<<i-1;
   return 0;
}

