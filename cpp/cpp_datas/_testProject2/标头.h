#pragma once
#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
struct library {
	char id[20];//ͼ���id
	char name[100];//ͼ����
	int much;//Ǯ��
	library* pNext=NULL;
	//����һ��ָ�룬ָ����һ���ڵ㣬�ڵ������Ϊlibrary
};
library* pHead = NULL;//ͷָ��
library* pTail = NULL;//��һ��ָ��
void init(int &n) {
	cin >> n;
	for (int i = 0; i < n;i++) {
		library* p = new library;//��̬�����ڴ�ռ䣬�ռ��СΪlibrary//ÿ�����붼��p��ǰ�ƶ��Ĺ���
		cout << "��ã��������鱾ID ���� �Լ���Ǯ���ֱ��ÿո����ÿ��ѡ�" << endl;
		cin >> p->id >> p->name >> p->much;//����ָ�������Ҫ��"->"
		if (pHead==NULL) {//�ж��Ƿ�Ϊͷָ��
			pHead = p;//��ͷָ���ֵΪ��ǰָ��
		}
		else {
			pTail->pNext = p;//����һ����ָ��ָ�����ڵģ������������������ôp->pNextҲ��ָ��ǰ�棬����pNext��Զ��ָ��ǰ���
		}
		pTail = p;//��pTail�ƶ�����pһ����λ��
	}
}
void printout() {
	library* p = pHead;//��ӡ���㿪ʼ����ͷָ���¼Ϊp
	while (p!=NULL) {//���û�е�ĩβ��һֱѭ��
		cout << "�����Ȿ�����Ϣ���ֱ���ID ���� �ͼ�Ǯ" << endl;
		cout << p->id << "   " << p->name << "   " << p->much;
		cout << endl;
		p = p->pNext;//��p��ǰ�ƶ�
	}
}
void add() {

}
void del() {

}

//���Ͼ�Ϊ����ʹ��
//int Josephus[100];