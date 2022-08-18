#include"heads.h"
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char a[1000];
char b[1000];
int A[1000];
int B;
int s[1000];
//1168：大整数加法
int main() {
	cin >> a >>B ;
	int len = strlen(a);
	int len2 = strlen(b);

	//转为int 类型进行存储，而且逆序
	/*for (int i = 0; i < len;i++) {
		A[len - 1 - i] = a[i] - '0';
	}
	for (int i = 0; i < len2;i++) {
		B[len2 - 1 - i] = b[i] - '0';
	}*/
	for (int i = 0; i < len; i++) {
		A[i] = a[i] -'0';
	}
	int t = 0;
	int max_len = len + len2;
	for (int i = 0; i < max_len;i++) {
		t = t * 10 + A[i];
		s[i] = t / B;
		t %= B;
	}
	int i = 0;
	while (i<len-1&&s[i]==0) {
		i++;
	}
	for (; i < max_len;i++) {
		cout << s[i];
	}
	cout << endl;
	cout <<"余数：" << t;
	//int max_len = max(len, len2);//和的长度
	//for (int i = 0; i < max_len;i++) {
	//	s[i] = A[i] + B[i]+t;
	//	t = s[i] / 10;
	//	s[i] %= 10;
	//}
	////清楚前导0
	//while (s[max_len-1]==0&&max_len>1) {
	//	max_len--;
	//}
	//for (int i = max_len - 1; i >=0;i--) {
	//	cout << s[i];
	//}
	//1169：大整数减法
	//for (int i = 0; i <=max_len-1;i++) {
	//	/*if (A[i] < B[i]) {
	//		A[i + 1]--;
	//		A[i] += 10;
	//	}
	//	s[i] = A[i] - B[i];*/
	//	//乘法公式
	//	for (int j = 0; j < max_len - 1;j++) {
	//		s[i + j] += A[i] * B[j];
	//		s[i + j + 1]+= s[i + j] / 10;
	//		s[i + j] %= 10;
	//	}
	//
	//}

	/*while (s[max_len-1]==0&&max_len>1) {
		max_len--;
	}*/
	
	/*for (int i = max_len-1; i >= 0;i--) {
		cout << s[i];
	}
	*/
	

	return 0;
}

