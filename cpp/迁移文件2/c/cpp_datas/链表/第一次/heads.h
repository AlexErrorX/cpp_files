
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
struct library {
	char name[100];
	char ID[100];
	double money;
	library* pNext = NULL;//ָ����һ���ڵ㣬null=�յ�
};
library* pHead = NULL;//ͷָ��
library* pTail = NULL;//βָ��
void init(int& n) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		//library*p=(library*)malloc(sizeof(library));//����һ��library�ṹ�����Ĵ�С��ַ����*p����
		library* p = new library;//ÿ�����붼����ǰ�ƶ��Ĺ���
		cout << "�������鱾��ID�����ƣ���Ǯ���ֱ��ÿո����" << endl;
		cin >> p->ID >> p->name >> p->money;//�ṹ��ָ����ʳ�Ա������Ҫ��ͷ
		//��������ص㣡����������������������������
		if (pHead == NULL) {//�ж�p�Ƿ�ΪΪ�׸��鼯�ĵ�ַ
			pHead = p;//��ס�׵�ַ
		}
		else {
			pTail->pNext = p;//ǰһ���ڵ�ģ�pTail��ָ��Ľṹ�塣�����pNextָ�����ڵ�ָ�룬��������Ҳ��p,����pNext��Զָ����һ��
		}
	
		pTail = p;//����һ����ַָ�����ڵģ������棬Ȼ��ִ���ٴ�ѭ������ʱ��pTail������һ��

	}
}
void print_s() {
	library* p = pHead;//��ͷ�ڵ㿪ʼ
	while (p!=NULL) {
		cout << "ID:" << p->ID << "   " << "�鼯����" << p->name << "   " << "��Ǯ��" << p->money << endl;
		p=p->pNext;//��ǰ�ƣ����Ұ���һ���ڵ�ĵ�ַ������ǰ
	}
}
void sch() {
	char name[100];
	cin >> name;
	library* p = pHead;
	while (p!=NULL) {
		if (strcmp(name,p->name)) {
			cout << "�ҵ��ˣ���Ҫ�ҵ������ǣ�" << endl;
			cout << "ID:" << p->ID << "   " << "�鼯����" << p->name << "   " << "��Ǯ��" << p->money << endl;
			return;
		}
		p=p->pNext;//��printһ��
	}
}

void del() {
	//p������Ҫɾ���Ľڵ㣬t����һ���ڵ㣨���ߣ�
	library* p = pHead;
	library* t = NULL;
	char id[100];
	cout << "������id:" << endl;
	cin >> id;
	//�����׵�
	if (strcmp(id,p->ID)==0) {
		p = p->pNext;//��p���ƶ���pNext
		pHead = p;//�µ�ͷ�ڵ�
	}
	while (p!=NULL) {//��������ڵ�
		if (strcmp(id,p->ID)==0) {
			t->pNext = p->pNext;//�Ȱ�ǰһ���ڵ�pNext���ӵ���һ���ڵ㣬�м�ڵ��޷�����
			cout << "ɾ���ɹ���";
			return;
		}
		t = p;//��סǰһ���ڵ�ĵ�ַ
		p=p->pNext;//��ǰ�ƶ�
	}
}
void add() {
	int n;//λ��
	cout << "��������Ҫ�����λ�ã�" << endl;
	cin >> n;
	library* p = new library;//����һ���µĽڵ�����Ϣ
	cout << "���������ͼ���ID,���ƣ��ͼ۸�" << endl;
	cin >> p->ID >> p->name >> p->money;
	if (n==0) {//������λ��
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