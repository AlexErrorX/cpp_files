#include"heads.h"
using namespace std;
int main() {
	int n;
	while (true) {
		cout << "1.��ʼ�� 2. ��ӡ 3.����ѧ��4 ���ѧ�� 5 ɾ��ѧ��" << endl;
		int choice;
		cout << "������ѡ��:" << endl;
		cin >> choice;
		switch (choice) {
		case 0:return 0; break;
		case 1:init(n);//��ʼ�� 
			break;
		case 2:print_s();//��ӡ
			break;
		case 3:sch();//����ѧ��
			break;
		case 4:add();//��� 
		break;
			case 5:del(); //ɾ�� 
			break;
		default:cout << "���Ҹ��ҵĳ��򣡣�" << endl;
			break;
		}
		
	}
	
	return 0;
}
