#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int a[1000];
int b[1000];
int c[1000];
int temp[1000];
int lena, lenb, lent;
int lenc;
int init(int *a) {
	char s[1000];
	cin >> s;
	int len = strlen(s);
	for (int i = 0; i < len;i++) {
		a[len - i - 1] = s[i] - '0';
	}
	return len;
}
void move(int n) {
	for (int i = 0; i < lenb;i++) {
		temp[i + n] = b[i];
	}
}
bool cmp() {
	if (lena > lent) 
		return true;
	if (lena<lent) {
		return false;
	}
	for (int i = lent - 1; i >= 0;i--) {
		if (a[i]>temp[i]) {
			return true;
		}
		if (a[i]<temp[i]) {
			return false;
		}
	}
	return true;
}
void sub() {
	for (int i = 0; i <= lena-1;i++) {
		if (a[i]<temp[i]) {
			a[i + 1] --;
			a[i]+=10;
		}
		a[i] = a[i] - temp[i];
	}
	while (a[lena-1]==0&&lena>1) {
		lena--;
	}
}
int main() {
	lena = init(a);
	lenb = init(b);
	lenc = lena - lenb;
	for (int i = lenc; i >=0; i--) {
		memset(temp, 0, sizeof(temp));
		move(i);
		lent = lenb + i;
		while (cmp()) {
			c[i]++;
			sub();
		}
	}
	while (c[lenc] == 0 && lenc > 0) {
		lenc--;
	}
	for (int i = lenc ; i >= 0;i--) {
		cout << c[i];
	}
	cout << endl;
	for (int i = lena - 1; i >= 0; i--) {
		cout << a[i];
	}
	return 0;
}