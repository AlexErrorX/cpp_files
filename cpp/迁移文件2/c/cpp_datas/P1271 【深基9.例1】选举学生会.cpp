#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int n,m;
int a[10000];
void sort(int l,int r){
	if(l<r){
	int i=l;
	int j=r;
	int mid = a[(l+r)/2];//��׼�� 
	while (i<=j){
		while (a[i]<mid)i++;//����Ҵ�ģ��Ҳ�����ǰһ�� 
		while (a[j]>mid)j--;//�ұ���С�ģ��Ҳ�������һ�� 
		if(i<=j){
			swap(a[i],a[j]);
			i++;
			j--;
		}	
	}
	sort(i,r);
	sort(l,j);
	}
	
}
int main (){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int temp;
		cin>>temp;
		if(temp<=n){
			a[i]=temp;
		}
	}
	sort(0,m-1);
	for(int i=0;i<m;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}

