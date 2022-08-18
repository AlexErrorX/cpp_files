#include<iostream>
#include<cstring>
using namespace std;
int n;
int k;
struct student {
	char ID[100];
	double rank;
};
student save[1000];
void effervescence() {
	for (int i = 0; i < n;i++) {
		for (int j = 0; j < n - i - 1;j++) {
			if (save[j].rank <save[j+1].rank) {
				swap(save[j], save[j + 1]);
			}
		}
	}
}
int main() {
	cin >> n;
	cin >> k;
	for (int i = 0; i < n;i++) {
		cin >> save[i].ID >> save[i].rank;
	}
	effervescence();
	for (int i = 0; i < n;i++) {
		if (k-1==i) {
			printf("%s %g", save[i].ID,save[i].rank);
			return 0;
		}
	}
	return 0;
}