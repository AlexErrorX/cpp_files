#include<iostream>
using namespace std;
int RSfib(int n){
	if(n==1 || n==2){//����β�������������һ���߶�ʱ���ͻ��� 
		return 1;
	}
	return RSfib(n-1)+RSfib(n-2);	
} 
int main (){
	cout<<RSfib(5);
	return 0;
} 
