#include<iostream>
#include<windows.h>
#include<ctime> 
#include<cmath>
using namespace std;
int a114514(double x){
	if(int (x*10) %10 >=5){
		return ceil(x);
	}else{
		return floor(x);
	}
}   

int main (){
//	int a=1;
//	int *p=&a;
//	cout<<p<<endl;//p����ǵ�ַ��*p�����ֵ 
//	cout<<*p<<endl;
//	cout<<sizeof(p);
//	int n;
//	cin>>n;
//	int a[100]={ 1,5,7};
//	for(int i=0;i<n;i++){
//		cin>>*(a+i);
//	}
//	for(int i=0;i<n;i++){
//		cout<<*(a+i);
//	}
	
	cout<<pow(2,3)<<endl;
	cout<<log(2)<<endl; //�������� ,log(1)����Ϊ0������������ֵ����Ϊ���� 
	double s;
	cin>>s;
	cout<<a114514(s)<<endl;
	return 0;
} 

