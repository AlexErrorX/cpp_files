#include<iostream>
#include<cstring>
using namespace std;
int n;
char A[100];
int a[100];
int m[100000];
int main (){
  cin>>A;
  cin>>n;
  int lena=strlen(A);
  for(int i=0;i<lena;i++)
  {
     a[i]=A[lena-i-1]-'0';
  }
  for(int i=0;i<lena;i++)
  {
    m[i]+=a[i]*n; 
    if(m[i]>=10)
    {
        m[i+1]+=m[i]/10;
        m[i]%=10；
    }
  }
  for(int i=lena;i>=0;i--)
  {
     cout<<m[i];
  }
   return 0;
}
