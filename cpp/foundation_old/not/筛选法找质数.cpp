#include <iostream>
#include <cmath>

using namespace std;
int  flag[20000];
int main () {
	int n;
	cin >> n;
	for (int i = 2; i <= sqrt(n); i++) {
		if (flag == 0) { //排除重复判定
			for (int j = 2; i * j <= n; j++) {
				flag[i * j] = 1;

			}
		}
		for (int i = 2; i <= n; i++) {
			if (flag[i] == 0) {
				cout << i << " ";
			}
		}
	}
	return 0;
}

//有问题