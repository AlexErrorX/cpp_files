#include<iostream>
#include<cstdio>
using namespace std;
int a[100000];
int n;
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
//void qsort(int l, int r) {
//	int x = a[l];//��׼��,һ��ʼ��Ϊ��׼��
//	int i = l, j = r;
//	while (i<j) {
//		while (a[j] > x && i < j)j--;
//		if (i < j) {
//		a[i] = a[j];
//		i++;
//		}
//		
//		while (a[i] < x&&i<j) {
//			i++;
//		}
//		if (i < j) {//��ȵ�����²���Ҫ����ֵ
//		a[j] = a[i];
//		j--;
//		}
//		
//	}
//	a[i] = x;
//	if (i<r) {
//		qsort(i+1, r);
//	}
//	if (l < j) {
//		qsort(l, j-1);
//	}
//}
long long sum=0;
int t[100000];//��������
void msort(int l, int r) {
	if (l==r) {
		return;
	}
	int mid = (l + r) / 2;
	
	msort(l, mid);//�ֽ����
	msort(mid + 1, r);//�ֽ��ұ�
	//�ϲ�
	int i = l;//��ߵĿ�ʼ�±�
	int j = mid + 1;//�ұߵĿ�ʼ�±�
	int k = l;//Ϊt���������
	while (i<=mid&&j<=r) {//��ֹԽ��
		if (a[i]<=a[j]) {//������˾Ϳ�ʼ����
			t[k] = a[i];
			k++;
			i++;
		}
		else {
			t[k] = a[j];
			k++;
			j++;
			sum += mid - i + 1;
		}
	}
	while (i <= mid) {//����
		t[k] = a[i];
		k++;
		i++;
	}
	while (j <= r) {
		t[k] = a[j];
		k++;
		j++;
	}
	for (int i = l; i<=r;i++) {
		a[i] = t[i];
	}
}
void sher() {
		for (int gap = n / 2; gap >= 1; gap--) {//������϶
			for (int begin = 0; begin < gap;begin++) {
				//����
				int k, j;
				for (int i = begin; i < n; i += gap) {//�ӵڶ������ֿ�ʼ����
					int t = a[i];
					j = i - 1;
					while (t <= a[j] && j >= 0) {
						a[j + 1] = a[j];
						j--;
					}
					a[j + 1] = t;

				}
			}
			
		}
}
int main() {
	cin >> n;
	for (int i = 0; i < n;i++) {
		cin >> a[i];
	}
	sher();
	/*qsort(0,n-1);*/
	/*msort(0, n - 1);*/
	for (int i = 0; i < n;i++) {
		cout << a[i];
	}
	return 0;
}
