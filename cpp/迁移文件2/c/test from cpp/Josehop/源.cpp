#include"БъЭЗ.h"
int main() {
	int n, m;
	while (true) {
		cin >> n >> m;
		if (n == 0 && m == 0) {
			break;
		}
		pHead = NULL;
		init(n, m);
		baoshu(n, m);
	
	}
	return 0;
}