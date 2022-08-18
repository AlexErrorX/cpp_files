#include<iostream>

using namespace std;
int main (){
	for(int f=30;f<=99;f++){
		int s=0;
		int t=f;
		while(t){//µ¹ÖÃÊý×Ö 
			s=s*10+t%10;
			t/=10;
		}
		if(f-s==27){
			cout<<f<<" ";
			
		}
	}
}
