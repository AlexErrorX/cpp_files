#include<iostream>

using namespace std;
int main (){
	int Yue,aj;
	cin>>Yue;
	switch (Yue)
	{
		case 1 :aj=31;break;
		case 2 :aj=28;break;
		case 3 :aj=31;break;
		case 4 :aj=30;break;
		case 5 :aj=31;break;
		case 6 :aj=30;break;
		case 7 :aj=31;break;
		case 8 :aj=31;break;
		case 9 :aj=30;break;
		case 10 :aj=31;break;
		case 11 :aj=30;break;
		case 12 :aj=31;break;
	}
	cout<<Yue<<"有"<<aj<<"天"<<endl;
}