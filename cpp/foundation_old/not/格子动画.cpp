#include<iostream>
#include<windows.h> 

using namespace std;
int main (){
	int hero_x=0;
	int hero_y=0;
	while(true){
		cout<<hero_y<<" "<<hero_x<<endl;;
		for(int i=0;i<=9;i++){
			for(int j=0;j<=9;j++){
				if(i==hero_y&&j==hero_x){
					cout<<"s";
				}	
				else {
					cout<<"b";
				}
			}
		
		cout<<endl;
		}
		hero_x=hero_x+1;
		if(hero_x>9&&hero_y==9){
			hero_x=0;
			hero_y=0;
		}
		if(hero_x>9){
			hero_y+=1;
			hero_x=0;
		}
		Sleep(100);
		system("cls");//
	}
	
	return 0;
}
