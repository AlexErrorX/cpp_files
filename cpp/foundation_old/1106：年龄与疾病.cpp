//#include <iostream>

//
//using namespace std;
//int a[100];
//int main () {
//	int n;
//	cin >> n;
//	int ans = 0;
//	double p_1, p_2, p_3, p_4;
//	for (int i = 0; i <= n - 1; i++) {
//		cin >> a[i];
//		ans += a[i];
//	}
//
//	for (int i = 0; i <= n - 1; i++) {
//		if (a[i] >= 0 && a[i] <= 18) {
//			p_1 = ans / a[i];
//		} else if (a[i] >= 19 && a[i] <= 35) {
//			p_2 = ans / a[i];
//		} else if (a[i] >= 36 && a[i] <= 60) {
//			p_3 = ans / a[i];
//		} else if (a[i] >= 60 ) {
//			p_4 = ans / a[i];
//		}
//
//	}
//	printf("%.2lf%\n", 100 * p_1);
//	printf("%lf", p_2);
//	printf("%lf", p_3);
//	printf("%lf", p_4);
//
//	return 0;
//}