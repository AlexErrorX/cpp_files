#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char a[1000];
void f(char a[],int len) {
	if (a[len]!='!'&& len != -1) {
		cout << a[len];
		f(a, len - 1);
	}
	else if(len!=-1) {
		f(a, len - 1);
	}
}
int main() {
	cin >> a;
	int len= strlen(a);
	f(a,len-1);

	return 0;
}