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
//  /*��Ŀ��������a����������b���顣
//����������a�����һ�е�һ�У���������b�����һ�е�һ��
//           ����a�����һ�еڶ��У���������b�����һ�еڶ���
//��������̫�����*/ 
  for (int i = 0; i <= n - 1; i++) {
    for (int j = 0; j <= m - 1; j++) {
      if (a[i][j]==b[i][j]) {
        flag++;//相似数量
      }
    }
  }
  result = flag / (n * m) * 100;
  printf("%.2lf",result);
  return 0;
}
