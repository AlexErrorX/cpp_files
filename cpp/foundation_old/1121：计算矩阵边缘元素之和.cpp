#include<iostream>
using namespace std;
int a[100][100];
int n, m;
int ans = 0;
int main() {
  cin >> n >> m;
  for (int i = 0; i <= n - 1; i++) {//n行
    for (int j = 0; j <= m - 1;j++) {//m列
      cin >> a[i][j];
    }
  }
  for (int i = 0; i <= n - 1;i++) {
    for (int j = 0; j <= m - 1;j++) {
      if(j==0||i==0||j==m-1||i==n-1)
            {
                ans+=a[i][j];

                }
    }
  }
  cout << ans;
  return 0;
}