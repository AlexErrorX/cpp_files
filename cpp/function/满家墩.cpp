#include<iostream>
#include<cmath>
//abs() ¾ø¶ÔÖµº¯Êý 
using namespace std;
double dist(double x1,double y1,double x2,double y2){
	double c,b;
	c=x1-x2;
	b=y1-y2;
	return int(sqrt(pow(c,2)+pow(b,2)));
} 
int main (){
	double x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	cout<<dist(x1,y1,x2,y2);
	return 0;
	}
