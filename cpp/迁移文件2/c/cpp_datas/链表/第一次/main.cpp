#include"heads.h"
using namespace std;
int main() {
	int n;
	while (true) {
		cout << "1.初始化 2. 打印 3.查找学生4 添加学生 5 删除学生" << endl;
		int choice;
		cout << "请输入选项:" << endl;
		cin >> choice;
		switch (choice) {
		case 0:return 0; break;
		case 1:init(n);//初始化 
			break;
		case 2:print_s();//打印
			break;
		case 3:sch();//查找学生
			break;
		case 4:add();//添加 
		break;
			case 5:del(); //删除 
			break;
		default:cout << "别乱搞我的程序！！" << endl;
			break;
		}
		
	}
	
	return 0;
}
