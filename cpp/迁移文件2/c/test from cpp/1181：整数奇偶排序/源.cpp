#include<iostream>
using namespace std;
int a[1001];
int ans = 0;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		if (a[t] == 0) {//如果t这个数没有出现过
			ans++;
			a[t]++;
		}
		
	}
	cout << ans;
	cout << endl;
	for (int i = 0; i <= 1000; i++) {
		if (a[i]!=0) {
			cout << i<<" ";
		}
	}
	return 0;
}