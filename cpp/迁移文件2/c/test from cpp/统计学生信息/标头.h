#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
 struct student {
	char student_ID[21];
	char name[41];
	char gender;
	int old;
	int grade;
	char wheres[41];
	student* pNext = NULL;
	student* pre = NULL;
};
student* pStart = NULL;
student* pTail = NULL;
void init() {
	char a[4] = "end";
	while (true) {
		student* p = new student;
		cin >> p->student_ID;
		if (strcmp(p->student_ID,a)==0) {
			return;
		}
		cin >> p->name >> p->gender >> p->old >> p->grade >> p->wheres;
		if (pStart == NULL) {
			pStart = p;
		}
		else {
			pTail->pNext = p;
			p->pre = pTail;
		}
		pTail = p;
	}
}
void outprint() {
	student* p = pTail ;
	while (p!=NULL) {
		cout << p->student_ID << " " << p->name << " " << p->gender << " " << p->old <<" " << p->grade <<" " << p->wheres;
		cout << endl;
		p = p->pre;
	}
}