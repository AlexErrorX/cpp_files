#include<iostream>
#include<cstdio>
using namespace std;
int n;
int a[5000];
void sort_m() {
	for (int i = 0; i < n;i++) {
		for (int j = 0; j < n - i - 1;j++) {
			if (a[j]>a[j+1]) {
				swap(a[j], a[j + 1]);
			}
		}
	}
}
int main() {
	cin >> n;
	for (int i = 0; i < n;i++) {
		cin >> a[i];
	}
	sort_m();
	if (a[0]%2!=0) {
		cout << a[0];
	}
	
	for (int i = 1; i < n;i++) {
		if (a[i]%2!=0) {
			cout <<"," << a[i];
		}
	}
	return 0;
}