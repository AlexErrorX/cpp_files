#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int n;
int a[100];
void bowl(int n) {
	int b[1000];
	memset(b, 0, sizeof(b));
	int t;
	for (int i = 0; i < n;i++) {
		cin >> t;
		b[t]++;
	}
	for (int i = 0; i < 1000; i++) {
		while (b[i]--) {
			cout << i << " ";
		}
	}
}
int main() {
	cin >> n;

	bowl(n);
	return 0;
}