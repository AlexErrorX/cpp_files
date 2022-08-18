#include<iostream>
using namespace std;
double max_m(double a,double b,double c){
	double max=0;
	if(a>b&&a>c){
		max=a;
	}else if (b>a&&b>c){
		max=b;
	}else{
		max=c;
	}
	return max;
}
int main (){
	double a,b,c;
	double mn;
	double m;
	cin>>a>>b>>c;
	mn=max_m((a+b),b,c)*max_m(a,b,(b+c));
	m=max_m(a,b,c)/mn;
	printf("%.3lf",m);
	return 0;
}
