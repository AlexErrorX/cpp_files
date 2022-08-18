#include<iostream>

using namespace std;
int y[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
	int year,month,day,ans=0;
	cin>>year>>month>>day;
	if(year%4==0&&year%100!=0||year%400==0){
		y[2]=29;
	}
	for(int i=1;i<=month-1;i++){
		ans+=y[i];
	}
	ans=ans+day;
	cout<<ans;
	return 0;
}
