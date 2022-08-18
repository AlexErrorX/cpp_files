#include<iostream>
using namespace std;
int f(int x,int y,int z){
	if(z<=x+2){
		return 1;
	}
	return f(x,y,z-1)+y*f(x,y,z-x-2);
}
int main (){
	int x,y,z;
	cin>>x>>y>>z;  
	cout<<f(x,y,z+1);
	return 0;
}
