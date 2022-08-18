#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int n;
int flag[1000];
struct st {
	int C;
	int math;
	int E;
	int Score=0;
	int rank;
}a[1000];
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i].C >> a[i].math >> a[i].E;
		a[i].rank = i + 1;
		a[i].Score = a[i].C + a[i].math + a[i].E;
	}
	for (int i = 0; i < n - 1;i++) 
		for (int j = 0; j <= n-i-2; j++) {
			if (a[j].Score <a[j+1].Score ) {
				swap(a[j], a[j + 1]);
			}
			else if (a[j].Score ==a[j+1].Score &&a[j].C <a[j+1].C ) {
				swap(a[j], a[j + 1]);
			}
		/*	else if (a[j].Score == a[j + 1].Score&&a[j].C ==a[j+1].C&& a[j].rank <a[j+1].rank) {
				swap(a[j], a[j + 1]);
			}*/
		}
	for (int i = 0; i < 5;i++) {
		cout << a[i].rank <<" " << a[i].Score;
		cout << endl;
	}
			
	return 0;
}