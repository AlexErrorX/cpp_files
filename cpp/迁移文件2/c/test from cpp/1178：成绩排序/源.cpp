#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
struct student {
	char name[21];
	int rank;
};
student save[100];
int compare(char a[],char b[]) {
	int lena = strlen(a);
	int lenb = strlen(b);
	int len = max(lena, lenb);
	for (int i = 0; i < len;i++) {
		if ((a[i] >= 'a' && a[i] <= 'z' && b[i] >= 'a' && b[i] <= 'z')|| (a[i] >= 'A' && a[i] <= 'Z' && b[i] >= 'A' && b[i] <= 'Z')) {
			if (a[i]>b[i]) {
				return 0;
			}
			else if (a[i]<b[i]) {
				return 1;
			}
			else {
				i++;
			}
		}
	}
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n;i++) {
		cin >> save[i].name >> save[i].rank;
	}
	for (int i = 0; i < n;i++) {
		for (int j = 0; j <= n - i - 1;j++) {
			if (save[j].rank <save[j+1].rank ) {
				swap(save[j], save[j + 1]);
			}
			else if (save[j].rank==save[j+1].rank) {
					if (compare(save[j].name,save[j+1].name)==1) {
						swap(save[j], save[j + 1]);
					}
			}
		}
	}
	for (int i = 0; i < n;i++) {
		cout << save[i].name << " " << save[i].rank;
		cout << endl;

	}
	return 0;
}
