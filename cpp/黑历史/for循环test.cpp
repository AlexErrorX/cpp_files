#include<iostream>
#include<iomanip>
/*io代表输入输出，manip是manipulator（操纵器）
的缩写(在 iomanip的作用:主要是对cin,cout之类的一些操纵运算子，比如
setfill,setw,setbase,setprecision等等
*/
using namespace std;
int main (){
	double a,b,s,tot_s;
	tot_s=0;
	for(int k=1;k<=10;k++)//控制下面的程序段执行10次
	{
		cin>>a>>b;//长和宽
		s=a*b;//面积
		tot_s =tot_s+s;//把面积累计起来
		
	}
	cout<<fixed<<"totol S="<<tot_s<<endl;//输出总面积
	return 0;//代表程序正常退出
}