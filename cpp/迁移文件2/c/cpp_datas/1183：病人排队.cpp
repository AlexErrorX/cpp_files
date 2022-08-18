#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int n;
int pd=0;
int pds=0;
struct ys{
	char id[100];
	int old;
}a[100],b[100]; 
void choose(ys x[],int y){
	for(int i=0;i<y;i++){
		for(int j=0;j<=y-i;j++){
			if(x[j].old<x[j+1].old ){
				swap(x[j],x[j+1]);
			}
		}
	}
}
int main (){
	cin>>n;
	for(int i=0;i<n;i++){
		int temp;
		char temps[100];
		cin>>temps>>temp;
		if(temp>=60){
			b[i].old =temp;
			strcpy(b[i].id ,temps);
			pd++;
		}else {
			a[i].old=temp;
			strcpy(a[i].id ,temps);
			pds++;
		}
	}
	choose(b,n);//¿œƒÍ»À 
	for(int i=0;i<pd;i++){
		cout<<b[i].id ;
		cout<<endl;
	}
	for(int i=0;i<n-1;i++){
		if(a[i].old !=0){
			cout<<a[i].id;
			cout<<endl;
		}
	}
	if(a[n-1].old !=0){
		cout<<a[n-1].id ;
	}
	return 0;

}

