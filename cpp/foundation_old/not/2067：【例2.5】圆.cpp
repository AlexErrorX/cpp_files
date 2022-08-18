/**输入半径r，输出圆的直径、周长、面积，数与数之间以一个空格分开，每个数保留小数点后4位。*/



#include<iostream>

using namespace std;
float pi=3.14;
float r;
float c;
float s;
int main (){
  cin>>r;
  float d=r*2*3.14;
  c=2*r*3.14;
  s=r*r*3.14;
  printf("\f.4 ",d);
  printf("\f.4 ",c);
  printf("\f.4 ",s);
  

return 0;
}
