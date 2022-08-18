#pragma once
#include<iostream>
#include<cstdio>
using namespace std;
struct num {
	int date;
	num* pNext = NULL;
	num* pre = NULL;
};
num* pHead = NULL;
num* pTail = NULL;
void init(int &n) {
	cin >> n;
	for (int i = 1; i <= n;i++) {
		num* p = new num;
		cin >> p->date;
		if (pHead==NULL) {
			pHead = p;
		}
		else {
			pTail->pNext = p;
			p->pre = pTail;
		}
		pTail = p;
	}
}
void del(int &k) {
	cin >> k;
	num* p = pHead;
	while (p!=NULL) {
		if (p->date==k) {
			p->pre->pNext = p->pNext;
			if (p==NULL) {
				p->pNext->pre = p->pre;
			}
		}
		p = p->pNext;
	}
}
void print() {
	num* p = pHead;
	while (p!=NULL) {
		cout << p->date;
		cout << " ";
		p = p->pNext;
	}
}
void freeeeeee() {
	num* p = pHead;
	while (p!=NULL) {
		num* t = p;
		p = p->pNext;
		delete t;
		t = NULL;
	}//因为是要是直接删除了p ,那么就无法删除p->pNext
}