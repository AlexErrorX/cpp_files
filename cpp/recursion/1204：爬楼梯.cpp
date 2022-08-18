#include<iostream>
using namespace std;
int r(int n){
	if(n==1){
		return 1;
	}else if(n==2){
		return 2;
//	
//}else if (n==3){
//		return 4;
//	}
	return r(n-1)+r(n-2);
} 
int main  (){
	int n;
	while (cin>>n){
		cout<<r(n)<<endl;
	}
	return 0;
}
/*
×ß·¨
1 1 
2 2
3 4
4 7
5 13


*/
