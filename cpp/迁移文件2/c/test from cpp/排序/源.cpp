#include<iostream>
#include<cstdio>
using namespace std;
int a[100];
int n;
void choose(int a[]) {
	for (int i = 0; i < n;i++) {
		int k = i;//������Сֵ
		for (int j = i + 1; j < n;j++) {//����û�о����ĵط�
			if (a[j]<a[k]) {
				k = j;//��¼��Сֵ���±�
			}
		}
		if (k!=i) {//�Ż�,����Ա���֮���ֻ������Լ��Ļ����Ͳ����Լ����Լ�����
			swap(a[i],a[k]);///��������±�ת�����ͽ���
		}
	}
	for (int i = 0; i < n;i++) {
		cout << a[i];
	}
	
}
void effervescence() {//��С����
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
	for (int i = 1; i < n;i++) {//�ӵڶ������ֿ�ʼ����
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
		//	a[j + 1] = t;//����
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
		while (a[i]<mid) {//��ߵ�i�ұȻ�׼�����
			i++;
		}
		while (a[j]>mid) {//�ұ߱�����j�ұȻ�׼��С��
			j--;
		}
		if (i <= j) {//����ҵ����н�����������ǰ�ƶ�
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