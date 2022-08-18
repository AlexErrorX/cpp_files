#include<iostream>
#include<cstring>
using namespace std;
int a[100];
char A[100];
int c[100];
int n=0;//存储余数
int main (){
  cin>>A;
  int len =strlen(A);
  for(int i=0;i<=len;i++)
  {
     a[i]=A[i]-'0';
  }
  for(int i=0;i<len;i++)
  {
    c[i]=(n*10+a[i])/13;
   n=(n*10+a[i])%13; 
  }
  int lenc=0;
  while(c[lenc]==0&&lenc<len)
    lenc++;
  for(int i=lenc;i<len;i++)
    cout<<c[i];
  cout<<endl;
  cout<<n;
   return 0;
}
