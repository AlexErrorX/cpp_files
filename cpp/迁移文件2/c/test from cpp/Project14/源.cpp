#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int n;
double b[100], g[100];
void choose(double x[], int v) {
	for (int i = 0; i < v; i++) {
		double mid = x[i];
		for (int j = i; j < v; j++) {
			if (x[j] < mid) {
				mid = x[j];
			}
		}
		if (x[i] != mid) {
			double tempX;
			tempX = mid;
			mid = x[i];
			x[i] = tempX;
		}
	}
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		char temp[10];
		cin >> temp;
		if (strcmp(temp, "male") == 0) {
			cin >> b[i];
		}
		if (strcmp(temp, "female") == 0) {
			cin >> g[i];
		}
	}
	choose(b, n);
	for (int i = 0; i < n; i++) {
		cout << b[i];
		cout << " ";
	}
	return 0;
}
