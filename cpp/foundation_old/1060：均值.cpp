#include<iostream>

using namespace std;
int main (){
	int n;
	cin>>n;
	double ans=0;
	double data;
	for(int i=1;i<=n;i++){
		cin>>data;
		ans=ans+data;
	}
	printf("%.4lf",ans/n);
	return 0;
}