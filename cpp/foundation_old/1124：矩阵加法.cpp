#include<iostream>
using namespace std;
int a[1001][1001];
int b[1001][1001];
int ans[1001][1001];
int main() {
  int n, m;
  cin >> n >> m;
  for (int i = 0; i <= n - 1; i++) {
    for (int j = 0; j <= m - 1; j++) {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i <= n - 1; i++) {
    for (int j = 0; j <= m - 1; j++) {
      cin >> b[i][j];
    }
  }
  for (int i = 0; i <= n - 1; i++) {
    for (int j = 0; j <= m - 1; j++) {
      ans[i][j] = a[i][j] + b[i][j];
    }
  }
  for (int i = 0; i <= n - 1;i++) {
    for (int j = 0; j <= m - 1;j++) {
      cout << ans[i][j]<<" ";
      
    }
    cout << endl;
  }

  return 0;
}