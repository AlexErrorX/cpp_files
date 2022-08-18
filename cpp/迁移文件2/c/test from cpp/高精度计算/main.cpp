#include"heads.h"
int main() {
	cout << "同志您好！，请输入您要计算的两个数（因数，加数，除数）" << endl;
	cin >> a_init;
	cin >> b_init;
	int len1 = strlen(a_init);
	int len2 = strlen(b_init);
	 init(a_init,b_init,a,b,len1,len2);//逆序存储
	 int LEN = max(len1, len2);
	 HP(a,b,s,LEN);
	return 0;
}