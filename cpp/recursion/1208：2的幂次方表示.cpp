#include<iostream>
#include<cstring>
using namespace std;
int num;
void f(int m,int n)//m是要分解的数,n是第几位
{
   int x;//记录余数（数值）
   if(m==0) return ;//分解完之后返回
    x=m%2;
    m/=2;
    f(m,n+1);
    if(m!=0&&x==1)//不是第一个数而且还没有被分解完，写上+号
      cout<<"+";
    if(x!=0)
    {
       if(n==0)cout<<"2(0)";
       else if(n==1)cout<<"2";
       else if (n==2)cout<<"2(2)";
       else{
          cout<<"2(";
          f(n,0);
          cout<<")";
       }
    }
}
int main (){
  cin>>num;
  f(num,0);
  return 0;
}
//解体想法：
//不能一直抄代码，而是去深入理解步骤
//从头来讲，这道题目我是有理解递归的步骤，但是思想太单一，而且没有实现
//对于算法而言，要在脑海里抽象出具体的步骤，而且方方都要考虑周全
