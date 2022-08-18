#pragma once
#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int a[1000];
int len;
void chen(int &len) {
	int t = 0;
	for (int i = 0; i <= len - 1;i++) {
		a[i] = a[i] * 2 + t;
		t = a[i] / 10;
		a[i] %= 10;
	}
	if (t>0) {
		len++;
		a[len - 1] = t;
	}
}