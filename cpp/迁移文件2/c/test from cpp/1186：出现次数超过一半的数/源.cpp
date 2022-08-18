#include<iostream>
using namespace std;
char a[26];
char s[1001];
char Max_c;
int MAX;
int main() {
	cin >> s;
		for (int j = 0; j < strlen(s); j++) {
			char t=s[j];
			a[t-97]++;
			if (MAX<a[t-97]|| MAX==a[t-97]&&Max_c>t) {
				MAX = a[t - 97];
				Max_c = t;
			}
		}
		cout << Max_c << " " << MAX;
		return 0;
}