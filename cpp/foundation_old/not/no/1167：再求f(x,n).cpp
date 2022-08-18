#include<iostream>
using namespace std;
double fun(double x,double n){
	if(n==1){
		return x/(1+x);
	}return x/(n+fun(x,n-1));  //x/(x+n-1)/(n-2)+x
}
int main (){
	double x;
	double n;
	cin>>x>>n;
 	printf("%.2lf",fun(x,n));
	return 0;
}
