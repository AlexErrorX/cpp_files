#include<iostream>
#include<cstring>
using namespace std;
int a[200];
int b[200];
char A[200];
char B[200];
int s[2000];
int main (){
  cin>>A>>B;
  int lena=strlen(A);
  int lenb=strlen(B);
  for(int i=0;i<lena;i++)
  {
     a[i]=A[lena-i-1]-'0';
  }
 for(int i=0;i<lenb;i++)
  {
     b[i]=B[lenb-i-1]-'0';
  }
 int maxlen=max(lena,lenb);
  for(int i=0;i<maxlen;i++)
  {
     s[i]+=a[i]+b[i];
     s[i+1]+=s[i]/10;
     s[i]%=10;
  }
  while(maxlen>0&&s[maxlen]==0)
  {
     maxlen--;
  }
  for(int i=maxlen;i>=0;i--)
  {
    cout<<s[i];     
  }
   return 0;
}
