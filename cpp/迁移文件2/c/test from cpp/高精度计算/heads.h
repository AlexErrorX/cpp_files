#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cstring>


using namespace std;
//�߾���(High precision)�ķ�����
//��Ҫ������char���͵Ŀ�ԣ���������ǵ����飬Ȼ��ÿ��λ�õ���ִ�����ǵļӼ��ˣ��������⣩
//��int ���ʹ洢,����char �������룬�������ǽ�������
int a[1000];
int b[1000];
char a_init[1000];
char b_init[1000];
int s[1000];
int len1;
int len2;
 void HP_and(int a[], int b[], int s[], int LEN)
{
	int t = 0;//�洢��λ
	for (int i = 0; i < LEN; i++) {
		s[i] = a[i] + b[i]+t;
		t = s[i] / 10;
		s[i] %= 10;
	}
	while (s[LEN-1]==0&&LEN>0) {//���ǰ��0
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
void init(char *a_init, char *b_init,int *a,int *b,int len1,int len2) {//˳������
	
	for (int i = 0; i < len1;i++) {//����洢
	a[i] = a_init[len1 - 1 - i] - '0';//1+1=8;����Ϊascii�������'1'��49,49+49=98,�պö�Ӧ'8'
	//������Ҫ��ȥ'0'��48���ſ��Եõ�ԭ������
	}
	for (int i = 0; i < len2; i++) {//����洢
		 b[i]= b_init[len2 - 1 - i] - '0';//1+1=8;����Ϊascii�������'1'��49,49+49=98,�պö�Ӧ'8'
		//������Ҫ��ȥ'0'��48���ſ��Եõ�ԭ������
	}
	
}


void HP(int *a, int *b, int *s,int &LEN) {
	int ch;
	cout << "1. �ӷ� 2. ���� 3. �˷�";
	cout << "������߾��ȼ���ѡ��:" << endl;
	cin >> ch;
	switch (ch) {
	case 1:HP_and(a,b,s,LEN);
			break;
	case 2:HP_subtraction(a,b,s);
			break;
	//case 3:cout<<HP_multiplication(a,b,s);
	//		break;
		default:cout << "�������" << endl;
	}
}