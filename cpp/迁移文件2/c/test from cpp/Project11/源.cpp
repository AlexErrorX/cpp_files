#include<iostream>
using namespace std;
int n;
struct st {
	int garde;
	char name[21];
}a[1000];
int main() {
	cin >> n;
	for (int i = 0; i <=n-1;i++) {
		cin >> a[i].name >> a[i].garde;
	}
	for (int i =0; i <n-1;i++) {
		for (int j = 0; j <= n - i-1;j++) {
			if (a[j].garde< a[j+1].garde) {
				swap(a[j], a[j + 1]);
			}else if(a[j].garde ==a[j+1].garde && a[j].name[0] > a[j + 1].name[0]) {
					swap(a[j], a[j + 1]);
			}
		}
	}
	for (int i = 0; i <= n-1; i++)
		cout << a[i].name << " " << a[i].garde << endl;
	return 0;
}