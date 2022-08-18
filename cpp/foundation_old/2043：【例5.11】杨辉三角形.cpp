#include<iostream>

using namespace std;
int a[20][20];
int main() {
  int n;
  cin >> n;
  a[0][0] = 1;
  for (int i = 1; i <= n-1;i++) {
    a[i][0] = 1;
    a[i][i] = 1;
    for (int j = 1; j <= i - 1;j++) {
      a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
    }
  }
    for (int i = 0; i <= n - 1;i++) {
      for (int j = 0; j <= n - 1;j++) {
        if(a[i][j]!=0){
          cout << a[i][j] <<" ";
        }
      }
      cout << endl;
    }

  return 0;
}