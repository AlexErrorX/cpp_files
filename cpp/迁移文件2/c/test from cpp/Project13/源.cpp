#include<iostream>
using namespace std;
//����ϰ(��С����)
//��������ѡ��O(n*n)��ð��O(n*n) or O(n)������O(n*n) or O(n)
// ���У�ð�ݺͲ����ȶ���ѡ���ȶ�
//�߼����򣺹鲢�����٣�ϣ���������������򣨶�����
// ���У�ϣ�������٣��Ѷ��ǲ��ȶ��ģ��鲢��Ͱ���������ȶ���
//Ͱ���򣺷�Χ��С
int n;
int b[10000];//��ʱ���飬��������
int a[100];//��������
void maopao(int n,int a[]) {
	for (int i = 0; i < n;i++) {
		for (int j = 0; j < n - i;j++) {
			if (a[j]>a[j+1]) {
				swap(a[j], a[j + 1]);
			}
		}
	}
}
void choose(int n,int a[]) {
	for (int i = 0; i < n;i++) {//����
		int min = i;//��¼��Сֵ
		for (int j = i; j < n;j++) {//����δ������������±�
			if (a[j]<a[min]) {
				min = j;//���¼�¼��Сֵ
			}
		}
		if (i!=min) {//�Ż������ʼ����i��С���Ͳ�������
			swap(a[i], a[min]);
		}
	}
}
//����Ϥ
void inst(int n,int a[]) {//��С����
	for (int i = 1; i < n;i++) {//�ӵڶ�������ʼ����
		int x = a[i];//�洢��Ҫ�������
		int t = i - 1;//��¼�±�
		while (x<=a[t] && t >= 0) {
			a[t+1] = a[t];//�����ƶ�
			t--;
		}
		a[t + 1] = x;
	}
}
void bowl() {//Ͱ����
	cin >> n;
	for (int i = 0; i < n;i++) {
		int t;
		cin >> t;
		b[t] += 1;//�����������Ѿ����������
	}
	for (int i = 0; i <=1000;i++) {
		if (b[i]!=0) {
			cout << i << " ";
		}
	}
}
void sort(int l,int r) {//��С����
	if (l<r) {
		int i, j;//�ƶ����±�
		i = l, j = r;
		int mid = a[(l + r) / 2];//��׼��
		while (i <= j) {//����Խ��
			while (a[i] < mid)i++;
			while (a[j] > mid)j--;
			if (i<=j) {//����ҵ������ͽ�����ǰ�ƶ��������ǵ��ڣ���ô��Ҳִ��i++��j--
				swap(a[i], a[j]);
				i++;
				j--;
			}
			
		}
		
		//�ݹ����
		sort(i,r);//��a[0]��ʼ,��mid-1����
		sort( l, j);
	}
}
void shell() {
	int gap = n / 2;
	for (gap = n / 2; gap <= n;gap++) {
		for (int begin = 0; begin < gap; begin++) {//�ӵڶ�������ʼ����
			for (int i = begin; i < n;i+=gap) {//���
				int x = a[i];//�洢��Ҫ�������
				int t = i - 1;//��¼�±�
				while (x <= a[t] && t >= 0) {
					a[t + 1] = a[t];//�����ƶ�
					t--;
				}
				a[t + 1] = x;
			}
			
		}
	}
	
}
int t[10000];//��������
int ans = 0;
void msort(int l, int r) {
	if (l == r) {//�������߽�
		return;
	}
	int mid = (l + r) / 2;//�м���
	msort(l, mid); //�ֽ����
	msort(mid + 1, r); //�ұ�
	//�ϲ�
	int i = l, j = mid + 1, k = l;//i ������ߵĿ�ʼ�±� j �����ұߵĿ�ʼ�±�
	while (i <= mid && j <= r) {//��ֹ i j Խ��
		if (a[i] <= a[j]) {
			t[k++] = a[i++];
		}
		else {
			t[k++] = a[j++];
			ans += mid - i + 1;//�����
		}
	}
	while (i <= mid) {//�����������
		t[k++] = a[i++];
	}
	while (j <= r) {//�����ұ�����
		t[k++] = a[j++];
	}
	for (int i = l; i <= r; i++) {//�ϲ�
		a[i] = t[i];
	}
}
int main (){
	cin >> n;
	for (int i = 0; i < n;i++) {
		cin >> a[i];
	}
	//ð������
	/*maopao(n,a);*/
	//ѡ������
	/*choose(n, a);*/
	//��������
	/*inst(n, a);*/
	//��������
	/*sort(0,n-1);*/
	//ϣ������(���������)
	/*shell();*/
	msort(0,n-1);
	for (int i = 0; i < n;i++) {
		cout << a[i] << " ";
	}
	//Ͱ����
	/*bowl();*/
	return 0;
}