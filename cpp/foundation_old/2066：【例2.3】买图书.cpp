#include<iostream>

using namespace std;
int main () {
	int n, m;
	double ans;
	cin >> n >> m;
	ans =n - (m * 0.8);
	printf("%.2lf",ans);
	return 0;
}