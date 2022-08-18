#include<iostream>

using namespace std;
int a[1000];
int main (){
	int max=1;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		if(a[max]<a[i]){
			max =i;
		}
	}
	cout<<max;
	return 0;
}

