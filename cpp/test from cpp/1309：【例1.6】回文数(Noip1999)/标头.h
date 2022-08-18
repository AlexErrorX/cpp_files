#pragma once
#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
char m[1000];
int a[1000];
int b[1000];//a的逆序
int n;
void init() {
	cin >> n >> m;
	for (int i = 0; i <=strlen(m )- 1; i++) {
		if (m[i] >= 'A') {
			a[i]=m[i] - 'A' + 10;
		}
		else {
			a[i] = m[i] - '0';
		}
	}
}
int len;
bool check() {
	for (int i = 0; i <len/2;i++) {
			if (a[i]!=a[len-1-i]) 
				return false;
			
	}
	return true;
}
void AND() {
	int t = 0;
	for (int i = 0; i <= len - 1;i++) {
		b[i] = a[len - 1 - i];
	}
	len++;
	for (int i = 0; i <= len-1 ;i++) {
		a[i] = a[i] + b[i] + t;
		t = a[i] / n;
		a[i] %= n;
	}
	while (a[len-1]==0&&len>1) {//清除前导0
		len--;
	}
	//for (int i = 0; i <= len-1;i++) {
	//	cout << a[i] ;
	//}
	//cout << endl;

}
