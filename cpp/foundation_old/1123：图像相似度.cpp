#include<iostream>
using namespace std;
int a[101][101];
int b[101][101];
float flag=0;
double result=0;
int main() {
  int n, m;
  cin >> n >> m;
  for (int i = 0; i <= n - 1; i++) {
    for (int j = 0; j <= m - 1; j++) {
      cin >> a[i][j];
    }
  }
  for(int i=0;i<=n-1;i++){
  	for(int j=0;j<=m-1;j++){
  		cin>>b[i][j];
	  }
  }
//  for(int i=0;i<=n-1;i++){
//  	for(int j=0;j<=m-1;j++){
//  		cin<<a[i][j];
//  		cin<<b[i][j];
//	  }
//  } 
//  /*题目是先输完a数组再输完b数组。
//不存在输入a数组第一行第一列，接着输入b数组第一行第一列
//           输入a数组第一行第二列，接着输入b数组第一行第二列
//这样输入太奇怪了*/ 
  for (int i = 0; i <= n - 1; i++) {
    for (int j = 0; j <= m - 1; j++) {
      if (a[i][j]==b[i][j]) {
        flag++;//鐩镐技鏁伴噺
      }
    }
  }
  result = flag / (n * m) * 100;
  printf("%.2lf",result);
  return 0;
}
