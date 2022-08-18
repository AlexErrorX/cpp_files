#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int n;
int pd=0;//boy
int pds=0;//girl
double  a[1000],b[1000];//a=boy b=girl
void sort(int l,int r,double x[]){//从小到大 
	if(l<r){
	int i=l;
	int j=r;
	int mid = x[(l+r)/2];
	while(i<=j){
		while (a[i]<mid)i++;
		while (a[j]>mid)j--;
			if(i<=j){
				swap(a[i],a[j]);
				i++;
				j--; 
			} 
		}
		sort(i,r,x);
		sort(l,j,x);
	}
	
}
void sorts(int l,int r,double x[]){//从大到小 
	if(l<r){
	int i=l;
	int j=r;
	int mid = x[(l+r)/2];
	while(i<=j){
		while (a[i]>mid)i++;
		while (a[j]<mid)j--;
			if(i<=j){
				double s;
				s=a[i];
				a[i]=a[j];
				a[j]=s;
				i++;
				j--; 
			} 
		}
		sorts(i,r,x);
		sorts(l,j,x);
	}
}
int main (){
	cin>>n;
	for(int i=0;i<n;i++){
		double temp;
		char temps[10];
		cin>>temps>>temp;
		if(strcmp(temps,"male")==0){
			a[i]=temp;
			pd++;
		}else{
			b[i]=temp;
			pds++; 
		}		
	}
//	sort(0,pd,a);
	for(int i=0;i<pd;i++){
		cout<<a[i]<<" ";
	} 
}
