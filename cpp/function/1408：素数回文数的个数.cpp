#include<iostream>
#include<cstring>
using namespace std;
int n=1000;
int Is_zhishu(int a){
		for(int i=2;i<a;i++){
		if(a%i==0){
			return 1;
		}
	}
	return 0;
}
int Is_Huiwen(int n){
	int a_1=n%10;
	int a_10=n/10%10;
	int a_100=n/100;
	if(n<=100 && a_1==a_10){
		return 1;
	}else if(n<=1000 && a_1==a_100){
		return 1;
	}

	return 0;
}
int main (){
	int sum =0;
	int n;
	cin>>n;
	for(int i=11;i<=n;i++){
		if(Is_zhishu(i)==0 && Is_Huiwen(i)==1){
			sum++;
		}
	}
	cout<<sum;
	return 0;
}
