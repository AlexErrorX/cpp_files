#include <iostream>

using namespace std;
double a[10] = {28.9, 32.7, 45.6, 78, 35, 86.2, 27.8, 43, 56, 65};
double s[10];

int main () {
	double ans = 0;
	for (int i = 0; i <= 10 - 1; i++) {
		cin >> s[i];
	}
	for (int i = 0; i <= 10 - 1; i++) {
		//ans += (s[i] * a[i]);
		ans = ans + (s[i] * a[i]);

	}
	printf("%.1lf", ans);



	return 0;
}