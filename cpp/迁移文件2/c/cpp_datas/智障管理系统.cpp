
#define _CRT_SECURE_NO_WARNINGS

//���Ϲ���ϵͳ 
#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;

struct student {
	char id[21];
	char name[21];
	int age;
	void print(){
		/*cout<<id<<" "<<name<<" "<<age<<endl;*/
		cout << "ID:" << id << " " << "ѧ�����֣�" << name << " " << "ѧ�����䣺" << age;
		cout << endl;
	}
};

void init(student su1[],int &n){
	cout << "���������ݿ�ѧ����������" << endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cout << "������" << i << "ѧ��������:" << endl;
		/*cin>>su1[i].id>>su1[i].name>>su1[i].age;*/
		cout << "������ѧ��id:";
		cin >> su1[i].id;
		cout << endl;
		cout << "_____________________________________" << endl;
		cout << "������ѧ������";
		cin >> su1[i].name;
		cout << endl;
		cout << "_____________________________________" << endl;
		cout << "������ѧ������";
		cin >> su1[i].age;
	}
}
void print_s(student su1[],int n){
	for(int i=0;i<n;i++){
			su1[i].print();
		}
}
bool Compare(char a[],char b[]){
	char swap_a[100];
	char swap_b[100];
	strcpy(swap_a,a);
	strcpy(swap_b,b);
//	cout<<swap_a<<" "<<swap_b<<endl;
	int len=max(strlen(swap_a),strlen(swap_b));
	int sum=0;
	for(int i=0;i<len;i++){
		if(swap_a[i]==swap_b[i]){
			sum++;
		}
	}
	if(sum*1.0/len>=0.5){
		return true;
	}
	return false;
}
void sch(student su1[],int n){
	char name[21];
	cout<<"��������ҵ���:"<<endl; 
	cin>>name;
	for(int i=0;i<n;i++){
		if(Compare(name,su1[i].name)){
			cout<<"���ҳɹ�������"<<"��Ҫ���ҵ�����λͬ־��"<<endl; 
			su1[i].print();
		}
	}
}
void add(student su1[],int &n){
	cout << "����������Ҫ����˵���Ϣ��Ĭ��ÿ�����һ����" << endl;
	cout << "������id:";
	cin >> su1[n].id;
	cout << "   " << "������ѧ��������:";
	cin >> su1[n].name;
	cout << "   " << "������ѧ������:";
	cin >> su1[n].age;
	/*cin>>su1[n].id>>su1[n].name>>su1[n].age; */
	n++;
	cout << endl << "�����ɣ�";
} 
void del(student su1[],int &n){
	char name[21];
	cout<<"������ɾ������:"<<endl; 
	cin>>name;
	for(int i=0;i<n;i++){
		if(Compare(name,su1[i].name)){
			for(int j=i;j<n-1;j++){
				su1[j]=su1[j+1];
			}
			n--;
			cout<<"ɾ���ɹ���"; 
			return ;
		}
	}
}

student su1[21];
int main (){
	int n;
	int choice;
	//int cishu;
	//cout<<"1.��ʼ�� 2. ��ӡ 3.����ѧ��4 ���ѧ�� 5 ɾ��ѧ��"<<endl;
	/*cout<<"������������������";*/ 
	//cin>>cishu; 
	while (true){
		cout << "1.��ʼ�� 2. ��ӡ 3.����ѧ��4 ���ѧ�� 5 ɾ��ѧ��" << endl;
		cout<<"������ѡ��:"<<endl; 
		cin>>choice;
		switch(choice){
		case 0:return 0; break;
			case 1:init(su1,n);//��ʼ�� 
			break;
			case 2:print_s(su1,n);//��ӡ
			break;
			case 3:sch(su1,n);//����ѧ��
			break;
			case 4:add(su1,n);//��� 
			break;
			case 5:del(su1,n); //ɾ�� 
			break;
			default:cout<<"���Ҹ��ҵĳ��򣡣�"<<endl;
			break;
		}
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	//����ѧ��
	
	} 

//	cin>>n;
//	init(su1,n);//��ʼ�� 
//	print_s(su1,n);//������� 
//	//����ѧ��
	 
	return 0;
}
