#pragma once
//#include<iostream>
//#include<cstdio>
//#include<string>
////#inclue<string.h>
//using namespace std;
//struct student {
//	char name[21];
//	char die[21];
//	int age;
//	void print(){
//		cout<<name<<" "<<die<<" "<<age<<endl;
//	}
//};
//int main (){
//	int n;
//	cin>>n;
//	student su1[10];
//	for(int i=0;i<n;i++){
//		cin>>su1[i].name>>su1[i].die>>su1[i].age;
//	}
//	for(int i=0;i<n;i++){
//		su1[i].print();
//	}
//return 0;
//}







#define _CRT_SECURE_NO_WARNINGS

//���Ϲ���ϵͳ 
#include<iostream>
#include<cstdio>
#include<string.h>
#include<algorithm>
using namespace std;

//struct student {
//	char id[21];
//	char name[21];
//	int age;
//	void print(){
//		cout<<id<<" "<<name<<" "<<age<<endl;
//	}
//};
//
//void init(student su1[],int &n){
//	cout << "���������ݿ�ѧ����������" << endl;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cout << "������" << i << "ѧ��������:" << endl;
//		/*cin>>su1[i].id>>su1[i].name>>su1[i].age;*/
//		cout << "������ѧ��id:";
//		cin >> su1[i].id;
//		cout << endl;
//		cout << "_____________________________________" << endl;
//		cout << "������ѧ������";
//		cin >> su1[i].name;
//		cout << endl;
//		cout << "_____________________________________" << endl;
//		cout << "������ѧ������";
//		cin >> su1[i].age;
//	}
//}
//void print_s(student su1[],int n){
//	for(int i=0;i<n;i++){
//			su1[i].print();
//		}
//}
//bool Compare(char a[],char b[]){
//	char swap_a[100];
//	char swap_b[100];
//	strcpy(swap_a,a);
//	strcpy(swap_b,b);
////	cout<<swap_a<<" "<<swap_b<<endl;
//	int len=max(strlen(swap_a),strlen(swap_b));
//	int sum=0;
//	for(int i=0;i<len;i++){
//		if(swap_a[i]==swap_b[i]){
//			sum++;
//		}
//	}
//	if(sum*1.0/len>=0.5){
//		return true;
//	}
//	return false;
//}
//void sch(student su1[],int n){
//	char name[21];
//	cout<<"��������ҵ���:"<<endl; 
//	cin>>name;
//	for(int i=0;i<n;i++){
//		if(Compare(name,su1[i].name)){
//			cout<<"���ҳɹ�������"<<"��Ҫ���ҵ�����λͬ־��"<<endl; 
//			su1[i].print();
//		}
//	}
//}
//void add(student su1[],int &n){
//	cout << "����������Ҫ����˵���Ϣ��Ĭ��ÿ�����һ����" << endl;
//	cout << "������id:";
//	cin >> su1[n].id;
//	cout << "   " << "������ѧ��������:";
//	cin >> su1[n].name;
//	cout << "   " << "������ѧ������:";
//	cin >> su1[n].age;
//	/*cin>>su1[n].id>>su1[n].name>>su1[n].age; */
//	n++;
//	cout << endl << "�����ɣ�";
//} 
//void del(student su1[],int &n){
//	char name[21];
//	cout<<"������ɾ������:"<<endl; 
//	cin>>name;
//	for(int i=0;i<n;i++){
//		if(Compare(name,su1[i].name)){
//			for(int j=i;j<n-1;j++){
//				su1[j]=su1[j+1];
//			}
//			n--;
//			cout<<"ɾ���ɹ���"; 
//			return ;
//		}
//	}
//}
//
//student su1[21];
//int main (){
//	int n;
//	int choice;
//	//int cishu;
//	//cout<<"1.��ʼ�� 2. ��ӡ 3.����ѧ��4 ���ѧ�� 5 ɾ��ѧ��"<<endl;
//	/*cout<<"������������������";*/ 
//	//cin>>cishu; 
//	while (true){
//		cout << "1.��ʼ�� 2. ��ӡ 3.����ѧ��4 ���ѧ�� 5 ɾ��ѧ��" << endl;
//		cout<<"������ѡ��:"<<endl; 
//		cin>>choice;
//		switch(choice){
//		case 0:return 0; break;
//			case 1:init(su1,n);//��ʼ�� 
//			break;
//			case 2:print_s(su1,n);//��ӡ
//			break;
//			case 3:sch(su1,n);//����ѧ��
//			break;
//			case 4:add(su1,n);//��� 
//			break;
//			case 5:del(su1,n); //ɾ�� 
//			break;
//			default:cout<<"���Ҹ��ҵĳ��򣡣�"<<endl;
//			break;
//		}
//			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
//	//����ѧ��
//	
//	} 
//
////	cin>>n;
////	init(su1,n);//��ʼ�� 
////	print_s(su1,n);//������� 
////	//����ѧ��
//	 
//	return 0;
//}
//struct student {
//	int Ch;
//	int maths;
//	int Eng;
//};



//
//char a[10];
//bool cmp(char a, char b) {//a[j]��a[j+1]
//	if (a<b) {
//		return true;
//	}
//	return false;
//}
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n;i++) {
//		cin >> a[i];
//	}
//	sort(a,a+n,cmp);//������������Ǹ���ַ��ָ��a[0]����a[0]��ʼ����a[n-1]��������һ������������a+n����
//	//��С������
//	//cmp�����ƶ��Ĺ���
//	for (int i = 0; i < n; i++) {
//		cout << a[i];
//	}
//	return 0;
////}
//struct student {
//	int id;
//	double grade;
//};
////bool cmp(student t1,student t2) {//a[j]��a[j+1]
////	if (t1.grade>t2.grade) {
////		return true;
////	}
////	return false;
////}
//bool operator<(student t1,student t2) {//����С�ں�
//	if (t1.grade>t2.grade) {
//		return false;
//	}
//	return true;
//}
//void maopao(student u1[],int n) {
//	for (int i = 0; i < n;i++) {
//		for (int j = 0; j < n - i;j++) {
//			if (u1[j]<u1[j+1]) {//�Ӵ�С��
//				swap(u1[j], u1[j + 1]);
//			}
//		}
//	}
//}
//int main() {
//	int n,rank;
//	cin >> n;
//	cin >> rank;
//	student a[100];
//	for (int i = 0; i < n;i++) {
//		cin >> a[i].id >> a[i].grade;
//	}
//	//sort(a,a+n,cmp);//sort���ݵ�ʱ��ַ�������±�
//	maopao(a,n);
//	printf("%d %g",a[rank-1].id,a[rank-1].grade);
//	return 0;
//}




//linked list
//_________________________________________________________________________________________
struct library {
	char name[100];
	char ID[100];
	double money;
	library* pNext = NULL;//ָ����һ���ڵ㣬null=�յ�
};
library* pHead = NULL;//ͷָ��
library* pEnd = NULL;//βָ��