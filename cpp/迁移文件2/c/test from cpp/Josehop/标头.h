#pragma once
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
typedef struct monkey {
	int number;//记住编号
	monkey* pNext=NULL;
}mo;
monkey* pHead=NULL;
monkey* pTail=NULL;
void init(int n,int m) {
	for (int i = 1; i <= n;i++) {//建立n个猴子的空间
		mo* p = new mo;
		p->number = i;//记住编号
		if (pHead==NULL) {
			pHead = p;
		}
		else {
			pTail->pNext = p;
		}
		pTail = p;//往前移动

	}
	pTail->pNext = pHead;//循环链表
}

void baoshu(int n,int m) {
	mo* p = pTail;//从尾节点开始
	while (p->pNext!=p) {
		for (int i = 1; i <=m - 1;i++) {
			p =p->pNext;
		}
		p->pNext = p->pNext->pNext;
	}
	cout << p->number<<endl;
}
