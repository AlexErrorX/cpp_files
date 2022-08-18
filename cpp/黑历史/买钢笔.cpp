#include<iostream>

using namespace std;
int main (){
	int zongshu;//定义一个总数
	cin>>zongshu;//输入
	if (zongshu%4==0)
	{
		cout<<zongshu/4<<" 0"<<" 0";
		
	}else if (zongshu%4!=0){
		int zongshudi2;
		zongshudi2 =zongshu%4;//这个量是求余数
		switch (zongshudi2){//以余数作为判断条件
			case 1:
				cout<<(zongshu/4)-1<<" 1"<<" 0";break;
			case 2:
				cout<<(zongshu/4)-1<<" 0"<<" 1";break;
			case 3 :
				cout<<(zongshu/4)-2<<" 1"<<" 1";break;
			
			//因为余数不会大于除数（我问别人的），所以只有1到3
			//（我是知道的，但是我忘了这个概念）
		}
	}
	
}