#pragma once
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
typedef struct monkey {
	int number;//��ס���
	monkey* pNext=NULL;
}mo;
monkey* pHead=NULL;
monkey* pTail=NULL;
void init(int n,int m) {
	for (int i = 1; i <= n;i++) {//����n�����ӵĿռ�
		mo* p = new mo;
		p->number = i;//��ס���
		if (pHead==NULL) {
			pHead = p;
		}
		else {
			pTail->pNext = p;
		}
		pTail = p;//��ǰ�ƶ�

	}
	pTail->pNext = pHead;//ѭ������
}

void baoshu(int n,int m) {
	mo* p = pTail;//��β�ڵ㿪ʼ
	while (p->pNext!=p) {
		for (int i = 1; i <=m - 1;i++) {
			p =p->pNext;
		}
		p->pNext = p->pNext->pNext;
	}
	cout << p->number<<endl;
}
