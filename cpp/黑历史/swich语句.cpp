/*switch的用法*/


#include<iostream>

using namespace std;
int main(){
	int p,s;
	cin>>p;//用键盘输入p的值 
	switch (2*p)//根据 （）中的不同情况进行处理 
	{
		case 2 : p*p;break; 
		case 4 : p*p+1;break;     //不同的结果处理，后面要加break 
		case 6 : p*p+3;break;
		case 8 : p*p+4;break;
		case 10 :p*p+9;break;
		default:s=p+1;
			
	}
	cout<<s<<endl;
	
} 
/*ps
表达式 的值要要与常数中的 值同类类型 

*/ 
