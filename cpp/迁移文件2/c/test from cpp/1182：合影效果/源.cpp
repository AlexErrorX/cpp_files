#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int n;
int pd = 0, pds = 0;
//pd是男生的人数，pds是女生的人数
double  a[1000], b[1000];//a=boy b=girl
void sort(double x[],int n) {//排序（从小到大）
	for (int i = 0; i < n;i++) {
		for (int j = 0; j <= n - i - 1;j++) {
			if (x[j]>x[j+1]) {
				double temps;
				temps = x[j];
				x[j] = x[j+1];
				x[j + 1] = temps;
			}
		}
	}
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		double temp;
		char temps[10];
		cin >> temps >> temp;
		if (strcmp(temps, "male") == 0) {
			a[i] = temp;
			pd++;//男生次数
		}
		else {
			b[i] = temp;
			pds++;
		}
	}
	sort(a, pd);
	sort(b,pds);
	for (int i = 0; i <= n; i++) {
		if (a[i]!=0&&pd>0) {
			printf("%.2lf ", a[i]);
			pd--;
		}
	}

	for (int i = n; i>0 ; i--) {//倒徐输出
		if (b[i] != 0 && pds > 0) {
			printf("%.2lf ", b[i]);
			pds--;
		}
	}
}
