#include<iostream>
#include<cstdio>
using namespace std;
int a[1000];
int n;

int main() {
	cin >> n;
	for (int i = 0; i < n;i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n;i++) {
		int Max = i;
		for (int j = i; j < n;j++) {
			if (a[i]>Max) {
				Max = a[i];
			}
		}
		if (Max!=i) {
			swap(a[i], Max);
		}
	}
	for (int i = 0; i < n; i++) {
		cout << a[i];
	}
	return 0;
}