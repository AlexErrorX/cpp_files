#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
string a[1000];
int n=0;
bool flag;
int main() {
	while (cin >> a[n]) {
		flag = false;
		for (int i = 0; i < n;i++) {
			if (a[n] == a[i]) {
				flag = true;
				break;
			}
		}
		if (flag==false) {
			n++;
		}
	}
	for (int i = 0; i < n;i++) {
		for (int j = 0; j <= n - i - 2;j++) {
			if (a[j]>a[j+1]) {
				swap(a[j], a[j + 1]);
			}
			
		}
	}
	for (int i = 0; i < n; i++) {
		
		cout << a[i] << endl;
	}
	return 0;
}