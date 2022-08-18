#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int a[100];
int b[100];
char B[100];
char A[100];
int s[10000];
int main() {
	scanf("%s %s",A,B);
	int len = strlen(A);
	int len2 = strlen(B);
	for (int i = 0; i < len;i++) {
		a[i] = A[len - i - 1]-'0';
	}
	for (int i = 0; i < len2;i++) {
		b[i] = B[len2 - i - 1]-'0';
	}
	int LEN = len + len2+1;
	int t = 0;
	for (int i = 0; i < len;i++) {
		for (int j = 0; j < len2;j++) {
			s[i + j] += a[i] * b[j];
			t = s[i + j] / 10;
			s[i + j + 1] += t;
			s[i + j] %= 10;
		}
	}
	while (s[LEN-1]==0&&LEN>1) {
		LEN--;
	}
	
	for (int i =LEN-1 ; i >= 0;i--) {
		cout << s[i];
	}
	return 0;
}