#include<iostream>

using namespace std;
int a[100][100];
int n,i,j;
int main() {
  cin >> n >> i >> j;
  for (int t= 1; t <= n;t++) {
    cout << "(" << i << "," << t << ")"<< " ";
  }
  cout << endl;
  for (int t= 1; t <= n;t++) {
    cout << "(" << t << "," << j << ") ";
  }
  cout << endl;
  for (int x = 1; x <= n;x++) {
    for (int y = 1; y <= n;y++) {
      if((x-i)==(y-j)){
        cout << "(" <<x << "," << y << ") ";
      }
    }
  }
  cout << endl;
  for (int x = n;x>=1;x--) {
    for (int y = n; y>=1;y--) {
      if((x-i)==-(y-j)){
        cout << "(" <<x << "," << y << ") ";
      }
    }
  }
  return 0;
}