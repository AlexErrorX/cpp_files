/*switch���÷�*/


#include<iostream>

using namespace std;
int main(){
	int p,s;
	cin>>p;//�ü�������p��ֵ 
	switch (2*p)//���� �����еĲ�ͬ������д��� 
	{
		case 2 : p*p;break; 
		case 4 : p*p+1;break;     //��ͬ�Ľ����������Ҫ��break 
		case 6 : p*p+3;break;
		case 8 : p*p+4;break;
		case 10 :p*p+9;break;
		default:s=p+1;
			
	}
	cout<<s<<endl;
	
} 
/*ps
���ʽ ��ֵҪҪ�볣���е� ֵͬ������ 

*/ 
