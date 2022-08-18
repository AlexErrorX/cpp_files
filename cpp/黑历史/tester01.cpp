

#include<iostream>

using namespace std;
int main (){
	cout<<"从今开始一步步打败汪帝国主义\n！"; 
	
	
}


int ss(){
	int x,y;
	cin>>x>>y;
	cout<<x+y<<endl;
	cout<<x-y<<endl;
	cout<<x*y<<endl;
	cout<<x/y<<endl;
	
	
}
int aa (){
	int year ;
	cin>>year;
	if(year%4==0)
	{
		
		cout<<"这TM是闰年"; 
		
	}else if(year%100==0||year%400==0)
	{
		cout<<"这他妈是平年";	
    }else
	{
    	cout<<"这T吗是平年"; 
	}
	
	
}int mdd (){
	int x;
	string y;
	
	cin>>x;
	switch((x+1)%7){
		case 1:y="星期一";break;
		case 2:y="星期二";break;
		case 3:y="星期三";break;
		case 4:y="星期四";break;
		case 5:y="星期五";break;
		case 6:y="星期六";break;
		case 7:y="星期日";break;
	}
		cout<<y;
	
}

