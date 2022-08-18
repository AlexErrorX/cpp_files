#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cstring>


using namespace std;
//高精度(High precision)的方法：
//主要是利用char类型的宽裕来储存我们的数组，然后每个位置倒着执行我们的加减乘（除法除外）
//用int 类型存储,但用char 类型输入，方便我们进行输入
int a[1000];
int b[1000];
char a_init[1000];
char b_init[1000];
int s[1000];
int len1;
int len2;
 void HP_and(int a[], int b[], int s[], int LEN)
{
	int t = 0;//存储进位
	for (int i = 0; i < LEN; i++) {
		s[i] = a[i] + b[i]+t;
		t = s[i] / 10;
		s[i] %= 10;
	}
	while (s[LEN-1]==0&&LEN>0) {//清除前导0
		LEN--;
	}
	for (int i = LEN-1; i >= 0; i--) {
		cout << s[i];
	}
	cout << endl;
}
 int LENSU;
void HP_subtraction(int a[], int b[], int s[])
{
	 int LENSU = max(len1,len2);
	 for (int i = 0; i < LENSU;i++) {
		 if (a[i]<b[i]) {
			 a[i + 1]--;
			 a[i] += 10;
		 }
		 s[i] = a[i] - b[i];
	 }
	 for (int i = LENSU ; i > 0; i--) {
		 cout << s[i];
	 }
}
//int HP_multiplication(int a[], int  b[], int s[])
//{
//
//}
void init(char *a_init, char *b_init,int *a,int *b,int len1,int len2) {//顺序输入
	
	for (int i = 0; i < len1;i++) {//逆序存储
	a[i] = a_init[len1 - 1 - i] - '0';//1+1=8;是因为ascii码里面的'1'是49,49+49=98,刚好对应'8'
	//所以需要减去'0'（48）才可以得到原本的数
	}
	for (int i = 0; i < len2; i++) {//逆序存储
		 b[i]= b_init[len2 - 1 - i] - '0';//1+1=8;是因为ascii码里面的'1'是49,49+49=98,刚好对应'8'
		//所以需要减去'0'（48）才可以得到原本的数
	}
	
}


void HP(int *a, int *b, int *s,int &LEN) {
	int ch;
	cout << "1. 加法 2. 减法 3. 乘法";
	cout << "请输入高精度计算选项:" << endl;
	cin >> ch;
	switch (ch) {
	case 1:HP_and(a,b,s,LEN);
			break;
	case 2:HP_subtraction(a,b,s);
			break;
	//case 3:cout<<HP_multiplication(a,b,s);
	//		break;
		default:cout << "滚你妈的" << endl;
	}
}