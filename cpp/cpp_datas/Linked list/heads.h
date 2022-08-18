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

//智障管理系统 
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
//	cout << "请输入数据库学生的人数：" << endl;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cout << "请输入" << i << "学生的数据:" << endl;
//		/*cin>>su1[i].id>>su1[i].name>>su1[i].age;*/
//		cout << "请输入学生id:";
//		cin >> su1[i].id;
//		cout << endl;
//		cout << "_____________________________________" << endl;
//		cout << "请输入学生姓名";
//		cin >> su1[i].name;
//		cout << endl;
//		cout << "_____________________________________" << endl;
//		cout << "请输入学生年龄";
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
//	cout<<"请输入查找的人:"<<endl; 
//	cin>>name;
//	for(int i=0;i<n;i++){
//		if(Compare(name,su1[i].name)){
//			cout<<"查找成功！！！"<<"您要查找的是这位同志："<<endl; 
//			su1[i].print();
//		}
//	}
//}
//void add(student su1[],int &n){
//	cout << "请输入先生要添加人的信息（默认每次添加一个）" << endl;
//	cout << "请输入id:";
//	cin >> su1[n].id;
//	cout << "   " << "请输入学生的姓名:";
//	cin >> su1[n].name;
//	cout << "   " << "请输入学生年龄:";
//	cin >> su1[n].age;
//	/*cin>>su1[n].id>>su1[n].name>>su1[n].age; */
//	n++;
//	cout << endl << "添加完成！";
//} 
//void del(student su1[],int &n){
//	char name[21];
//	cout<<"请输入删除的人:"<<endl; 
//	cin>>name;
//	for(int i=0;i<n;i++){
//		if(Compare(name,su1[i].name)){
//			for(int j=i;j<n-1;j++){
//				su1[j]=su1[j+1];
//			}
//			n--;
//			cout<<"删除成功！"; 
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
//	//cout<<"1.初始化 2. 打印 3.查找学生4 添加学生 5 删除学生"<<endl;
//	/*cout<<"请先生输入程序次数：";*/ 
//	//cin>>cishu; 
//	while (true){
//		cout << "1.初始化 2. 打印 3.查找学生4 添加学生 5 删除学生" << endl;
//		cout<<"请输入选项:"<<endl; 
//		cin>>choice;
//		switch(choice){
//		case 0:return 0; break;
//			case 1:init(su1,n);//初始化 
//			break;
//			case 2:print_s(su1,n);//打印
//			break;
//			case 3:sch(su1,n);//查找学生
//			break;
//			case 4:add(su1,n);//添加 
//			break;
//			case 5:del(su1,n); //删除 
//			break;
//			default:cout<<"别乱搞我的程序！！"<<endl;
//			break;
//		}
//			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
//	//查找学生
//	
//	} 
//
////	cin>>n;
////	init(su1,n);//初始化 
////	print_s(su1,n);//输出所有 
////	//查找学生
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
//bool cmp(char a, char b) {//a[j]和a[j+1]
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
//	sort(a,a+n,cmp);//数组名本身就是个地址，指向a[0]。从a[0]开始，到a[n-1]结束（后一个参数不包含a+n本身）
//	//从小到大排
//	//cmp就是制定的规则
//	for (int i = 0; i < n; i++) {
//		cout << a[i];
//	}
//	return 0;
////}
//struct student {
//	int id;
//	double grade;
//};
////bool cmp(student t1,student t2) {//a[j]和a[j+1]
////	if (t1.grade>t2.grade) {
////		return true;
////	}
////	return false;
////}
//bool operator<(student t1,student t2) {//重载小于号
//	if (t1.grade>t2.grade) {
//		return false;
//	}
//	return true;
//}
//void maopao(student u1[],int n) {
//	for (int i = 0; i < n;i++) {
//		for (int j = 0; j < n - i;j++) {
//			if (u1[j]<u1[j+1]) {//从大到小排
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
//	//sort(a,a+n,cmp);//sort传递的时地址，不是下标
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
	library* pNext = NULL;//指向下一个节点，null=空的
};
library* pHead = NULL;//头指针
library* pEnd = NULL;//尾指针