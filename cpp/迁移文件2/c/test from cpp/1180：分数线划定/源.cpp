#include<iostream>
using namespace std;
int n;
int m;
struct player {
	int id;
	int score;
}a[50000];
void qsort(int l,int r) {
	if (l < r) {
		int i = l, j = r;
		player mid = a[(l + r) / 2];
		while (i<=j) {
			while (a[i].score > mid.score|| a[i].score==mid.score &&a[i].id<mid.id ) {
				i++;
			}
			while (a[j].score < mid.score || a[j].score == mid.score && a[j].id>mid.id) {
				j--;
			}
			if (i <= j) {
				swap(a[j], a[i]);
				i++;
				j--;
			}
		}
		qsort(i, r);
		qsort(l,j);
	}
	
	
}
int main() {
	cin >> n >> m;
	for (int i = 0; i < n;i++) {
		cin >> a[i].id>>a[i].score ;
	}
	qsort(0, n - 1);
	/*for (int i = 0; i < n; i++) {
		cout << a[i].id << " " << a[i].score;
		cout << endl;
	}*/
	m *= 1.5;
	/*for (int i = 0; i < m;i++) {
		if (a[i].score ==a[i+1].score ) {
			m++;
		}
		else if (a[i].id <a[i+1].id&& a[i].score == a[i + 1].score) {
			swap(a[i], a[i + 1]);
		}
	}*/int line = a[m - 1].score;
	while (a[m-1].score ==a[m].score ) {
		m++;
	}
	
	cout << line << " " << m;
	cout << endl;
	for (int i = 0; i < m;i++) {
		cout << a[i].id << " " << a[i].score;
		cout << endl;
	}
	
	return 0;
}