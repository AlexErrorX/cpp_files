#include"heads.h"
int main() {
	cout << "ͬ־���ã�����������Ҫ�������������������������������" << endl;
	cin >> a_init;
	cin >> b_init;
	int len1 = strlen(a_init);
	int len2 = strlen(b_init);
	 init(a_init,b_init,a,b,len1,len2);//����洢
	 int LEN = max(len1, len2);
	 HP(a,b,s,LEN);
	return 0;
}