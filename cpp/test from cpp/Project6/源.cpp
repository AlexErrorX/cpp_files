#include<iostream>
#include<cstdio>
using namespace std;
int a[40000]={1};
int b[400000];
int lenb;
void je(int &len,int t) {
	int temp = 0;
	for (int i = 0; i <= len - 1;i++) {
		a[i] = a[i] * t + temp;
		temp = a[i] / 10;
		a[i] %= 10;
	}
	while (temp>0) {
		a[len] = temp % 10;
		len++;
		temp /= 10;
	}
}
void SUM(int len) {
	int t=0;
	int len1 = max(len, lenb);
	for (int i = 0; i <= len1 - 1;i++) {
		b[i] += a[i] + t;
		t = b[i] / 10;
		b[i] %= 10;
	}
	if (t>0) {
		len1++;
		b[len1 - 1]++;
		
	}
	if (lenb < len1)
		lenb = len1;

}
int main() {
	int n;
	cin >> n;
	int len = 1;
	 lenb = 1;
	if (n==0) {
		cout << 0;
		return 0;
	}
	for (int i = 1; i <= n;i++) {
		je(len, i);
		SUM(len);
	}
	for (int i = lenb-1; i >= 0;i--) {
		cout << b[i];
	}
	return 0;
}