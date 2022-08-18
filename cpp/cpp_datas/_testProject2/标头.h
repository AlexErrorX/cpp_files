#pragma once
#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
struct library {
	char id[20];//图书的id
	char name[100];//图书名
	int much;//钱数
	library* pNext=NULL;
	//定义一个指针，指向下一个节点，节点的类型为library
};
library* pHead = NULL;//头指针
library* pTail = NULL;//上一个指针
void init(int &n) {
	cin >> n;
	for (int i = 0; i < n;i++) {
		library* p = new library;//动态申请内存空间，空间大小为library//每次申请都是p往前移动的过程
		cout << "你好！请输入书本ID 名称 以及价钱，分别用空格隔开每个选项：" << endl;
		cin >> p->id >> p->name >> p->much;//访问指针变量需要用"->"
		if (pHead==NULL) {//判断是否为头指针
			pHead = p;//将头指针的值为当前指针
		}
		else {
			pTail->pNext = p;//把上一个的指针指向现在的，但是如果这样整，那么p->pNext也是指向前面，所以pNext永远是指向前面的
		}
		pTail = p;//将pTail移动到和p一样的位置
	}
}
void printout() {
	library* p = pHead;//打印从零开始，把头指针记录为p
	while (p!=NULL) {//如果没有到末尾，一直循环
		cout << "这是这本书的信息，分别是ID 名称 和价钱" << endl;
		cout << p->id << "   " << p->name << "   " << p->much;
		cout << endl;
		p = p->pNext;//把p向前移动
	}
}
void add() {

}
void del() {

}

//以上均为链表使用
//int Josephus[100];