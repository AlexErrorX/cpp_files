#include<iostream>

using namespace std;

int main (){
	int n,age;
	double ans=0; 
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>age;
		ans=ans+age;
	}
	printf("%.2lf",ans/n);
	
	return 0;
}