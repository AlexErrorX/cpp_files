#include<iostream>
using namespace std;
int max_m(int a,int b){
	int max =0;
	if(a>b){
		max=a;
	}else{
		max=b;
	}
	return max;
//	if(a>b)
//	return a;
//	return b;	

}
int main (){
	int a=2;int b=3;
	cout<<max_m(a,b);
	return 0;
} 
