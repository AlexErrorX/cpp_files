#include<iostream>
#include<cstring>
using namespace std;
int a[100];
int b[100];
char A[100];
char B[100];
int s[1000];
int main (){
  cin>>A>>B;//记录数据
  int lena=strlen(A);//测量数组的长度的函数
  int lenb=strlen(B);
  //逆序存储
  for(int i=0;i<lena;i++)
  {
     a[i]=A[lena-1-i]-'0';
  }
for(int i=0;i<lenb;i++)
  {
     b[i]=B[lenb-1-i]-'0';  
  }
//加法计算
  int maxlen=max(lena,lenb);
  for(int i=0;i<maxlen;i++)
  {
     s[i]+=a[i]+b[i];
     s[i+1]+=s[i]/10;
     s[i]%=10;
  }
  //清除前导零
  while(s[maxlen]==0&&maxlen>0)
  {
     maxlen--;
  }
  //输出
  for(int i=maxlen;i>=0;i--)
    cout<<s[i];
   return 0;
}
