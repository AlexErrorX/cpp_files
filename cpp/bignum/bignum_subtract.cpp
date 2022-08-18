#include<iostream>
#include<cstring>
using namespace std;
int a[200];
int b[200];
char A[200];
char B[200];
int D[200];
int main (){
 cin>>A>>B;
 int lena=strlen(A);
 int lenb=strlen(B);
 //存储
 for(int i=0;i<lena;i++)
 {
    a[i]=A[lena-i-1]-'0';
 }
 for(int i=0;i<lenb;i++)
 {
    b[i]=B[lenb-i-1]-'0';
 }
 for(int i=0;i<lena;i++)
 {
    if(a[i]<b[i])
    {
       a[i+1]--;
       a[i]+=10;
    }
     D[i]=a[i]-b[i]; 
 }
 while(D[lena]==0&&lena>0)
 {
    lena--;
 }
 for(int i=lena;i>=0;i--)
 {
    cout<<D[i];
 }
   return 0;
}
