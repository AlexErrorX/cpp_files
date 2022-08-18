
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
struct library {
	char name[100];
	char ID[100];
	double money;
	library* pNext = NULL;//指向下一个节点，null=空的
};
library* pHead = NULL;//头指针
library* pTail = NULL;//尾指针
void init(int& n) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		//library*p=(library*)malloc(sizeof(library));//申请一个library结构体对象的大小地址，用*p储存
		library* p = new library;//每次申请都是往前移动的过程
		cout << "请输入书本的ID，名称，价钱，分别用空格隔开" << endl;
		cin >> p->ID >> p->name >> p->money;//结构体指针访问成员变量需要箭头
		//下面就是重点！！！！！！！！！！！！！！！
		if (pHead == NULL) {//判断p是否为为首个书集的地址
			pHead = p;//记住首地址
		}
		else {
			pTail->pNext = p;//前一个节点的（pTail）指向的结构体。里面的pNext指向现在的指针，但是现在也是p,所以pNext永远指向下一个
		}
	
		pTail = p;//把上一个地址指向现在的，到后面，然后执行再次循环，这时，pTail还是上一个

	}
}
void print_s() {
	library* p = pHead;//从头节点开始
	while (p!=NULL) {
		cout << "ID:" << p->ID << "   " << "书集名：" << p->name << "   " << "价钱：" << p->money << endl;
		p=p->pNext;//向前移，并且把下一个节点的地址交给当前
	}
}
void sch() {
	char name[100];
	cin >> name;
	library* p = pHead;
	while (p!=NULL) {
		if (strcmp(name,p->name)) {
			cout << "找到了！你要找到的书是：" << endl;
			cout << "ID:" << p->ID << "   " << "书集名：" << p->name << "   " << "价钱：" << p->money << endl;
			return;
		}
		p=p->pNext;//和print一样
	}
}

void del() {
	//p是我们要删除的节点，t是上一个节点（工具）
	library* p = pHead;
	library* t = NULL;
	char id[100];
	cout << "请输入id:" << endl;
	cin >> id;
	//处理首点
	if (strcmp(id,p->ID)==0) {
		p = p->pNext;//把p先移动到pNext
		pHead = p;//新的头节点
	}
	while (p!=NULL) {//处理后续节点
		if (strcmp(id,p->ID)==0) {
			t->pNext = p->pNext;//先把前一个节点pNext连接到下一个节点，中间节点无法访问
			cout << "删除成功！";
			return;
		}
		t = p;//记住前一个节点的地址
		p=p->pNext;//往前移动
	}
}
void add() {
	int n;//位置
	cout << "请输入你要插入的位置：" << endl;
	cin >> n;
	library* p = new library;//申请一个新的节点存放信息
	cout << "请输入插入图书的ID,名称，和价格" << endl;
	cin >> p->ID >> p->name >> p->money;
	if (n==0) {//插入首位置
		p->pNext = pHead;
		pHead= p;
	}
	library* t = pHead;
	for (int i = 1; i < n;i++) {
		t = t->pNext;
		
	}
	p->pNext = t->pNext;
	t->pNext = p;
}