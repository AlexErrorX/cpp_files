#include<iostream>

using namespace std;
int a[100000];//随便定义一个范围
int main () {
	int n, max = 0, len = 1;//max为最大值，len为数的哪一个
	cin >> n;
	for (int i = 0; i <= n - 1; i++) {
		cin >> a[i];
	}
	for (int i = 0; i <= n - 1; i++) {
		if (a[i] != a[i - 1]) {//和前面的数进行对比
			if (max <= len) {
				max = len;
			}
			len = 1;//初始值为1；
		} else {
			len += 1;
		}
	}
	if (max <= len) {
		max = len;

	}
	cout << max;

	return 0;
}/*已知一个已经从小到大排序的数组，这个数组的一个平台（Plateau）就是连续的一串值相同的元素，并且这一串元素不能再延伸。例如，在 1，2，2，3，3，3，4，5，5，6中1，2-2，3-3-3，4，5-5，6都是平台。试编写一个程序，接收一个数组，把这个数组最长的平台找出来。在上面的例子中3-3-3就是最长的平台。

【输入】
第一行有一个整数n，为数组元素的个数。第二行有n个整数，整数之间以一个空格分开。

【输出】
输出最长平台的长度。
*/