#include<iostream>
#include<cstdio>
using namespace std;
int a[100];
int n;
void choose(int a[]) {
	for (int i = 0; i < n;i++) {
		int k = i;//储存最小值
		for (int j = i + 1; j < n;j++) {//遍历没有经过的地方
			if (a[j]<a[k]) {
				k = j;//记录最小值的下标
			}
		}
		if (k!=i) {//优化,如果对比完之后发现还是他自己的话，就不用自己和自己交换
			swap(a[i],a[k]);///如果发现下标转换，就交换
		}
	}
	for (int i = 0; i < n;i++) {
		cout << a[i];
	}
	
}
void effervescence() {//从小到大
	for (int i = 0; i < n; i++) {
		/*bool flag = true;*/
		for (int j = 0; j < i;j++) {
			if (a[j]>a[j+1]) {
				swap(a[j],a[j+1]);
				/*flag = false;*/
			}
		}
		/*if (flag) {
			break;
		}*/
	}
	for (int i = 0; i < n;i++) {
		cout << a[i];
	}
}
void insert_sort() {
	int k, j;
	for (int i = 1; i < n;i++) {//从第二个数字开始插入
		//for (j = i-1; j >= 0;j--) {
		//	if (a[i]>a[j]) {
		//		break;
		//	}
		//}
		//if (j != i - 1) {
		//	int t = a[i];

		//	for (k = i - 1; k > j; k--) {
		//		a[k + 1] = a[k];
		//	}
		//	a[j + 1] = t;//插入
		//}
		int t = a[i];
		j = i - 1;
		while (t<=a[j]&&j>=0) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = t;
		
	}
	
	
}
void qsort(int l,int r) {
	int mid = a[(l + r) / 2];
	int i = l;
	int j = r;
	while (i<=j) {
		while (a[i]<mid) {//左边的i找比基准数大的
			i++;
		}
		while (a[j]>mid) {//右边遍历的j找比基准数小的
			j--;
		}
		if (i <= j) {//如果找到进行交换，接着往前移动
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}
	if(i<r)
	qsort(i, r);
	if(l<j)
	qsort(l, j);
	
}
int main() {
	cin >> n;
	int len = n;
	for (int i = 0; i < n;i++) {
		cin >> a[i];
	}
	//choose(a);
	//cout << endl;
	///*for (int i = 0; i < n;i++) {
	//	cout << a[i];
	//}*/
	//effervescence();
	//cout << endl;
	insert_sort();
	cout << endl;
	/*qsort(0, n - 1);
	for (int i = 0; i < n; i++) {
		cout << a[i];
	}*/
	for (int i = 0; i < n; i++) {
		cout << a[i];
	}
	return 0;
}