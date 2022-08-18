#include<iostream>
using namespace std;
int a[10];
int b[10];
void qsort(int l,int r,int s[]){
	if(l<r){
	int i=l;
	int j=r;
	int mid =s[(l+r)/2];
	while(i<=j){
		while (s[i]<mid)i++;
		while (s[j]>mid)j--;
			if(i<=j){
				swap(s[i],s[j]);
				i++;
				j--;
			}
		}
		qsort(i,r,s);
		qsort(l,j,s);
	}
	
}
int main (){
	for(int i=0;i<10;i++){
		a[i]=-1;
		b[i]=-1;
	}
	for(int i=0;i<10;i++){
		int x;
		cin>>x;
		if(x==0){
			b[i]=x;
		}
		else if(x%2!=0){
			a[i]=x;
		}else if (x%2==0){
			b[i]=x;
		}
	} 
	qsort(0,9,a);
	qsort(0,9,b);
	int n=9;
	int i=0;
	while(a[i]==-1){
		i++;
	}
	for(int j=n;j>=0;j--){
		cout<<a[j]<<" ";
	}
	while(b[i]==-1){
		i++;
	}
	for(;i<=9;i++){
		cout<<b[i]<<" ";
	}
	return 0;
} 
