#include<iostream>
#include<cstdio>
using namespace std;
int a[10];
int n=10;
int x;
void func(int, int, int);
int main() {
	cout << "���ɵ�ƣ�������10������õģ��Ӵ�С������" << endl;
	for (int i = 0; i < 10;i++) {
		cin >> a[i];
	}
	cout << "���ٴ�������ҵ�����" << endl;
	cin >> x;
	int l = 0;
	int r = n - 1;
	func(x,l,r);
	return 0;
}
void func(int x, int l, int r) {
	if (l <= r) {
		int mid = (l + r) / 2;
		if (a[mid] == x) {
			cout << "YES";
			return;
		}
		else {
			if (a[mid] > x)func(x, mid + 1, r);
			else func(x, l, mid - 1);
		}
	}
	else {
		cout << "FUCK DOWN THIS FUNCSTION";
		return;
	}
	
	
}