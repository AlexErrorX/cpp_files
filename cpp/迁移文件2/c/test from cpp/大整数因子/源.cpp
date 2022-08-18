#include<iostream>
#include<cstring>
using namespace std;
char c[1000];
int C[1000];
int ans[10];
int tot = 1;
int main() {
	cin >> c;
	for (int k = 2; k <= 9;k++) {
		int t = 0;
		//因为每次的C的值都会改变，所以必须写在里面
		int len = strlen(c);
		for (int i = 0; i < len; i++) {
			C[i] = c[i] - '0';
		}
		//————————————————————————————————————————————
		for (int i = 0; i < len;i++) {
			t = t * 10 + C[i];
			C[i] = t / k;
			t = t % k;
		}
		if (t==0) {
			ans[tot++] = k;
		}
	}
	if (tot==1) {
		cout << "none\n";
	}
	for (int i = 0; i < tot;i++) {
		if (i!=0) {
			cout << ans[i] << " ";
		}
		
	}
	
	return 0;
}