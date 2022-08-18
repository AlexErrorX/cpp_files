#include<iostream>
using namespace std;
//排序复习(从小到大)
//基础排序：选择O(n*n)，冒泡O(n*n) or O(n)，插入O(n*n) or O(n)
// 其中，冒泡和插入稳定，选择不稳定
//高级排序：归并，快速，希尔，基数，堆排序（二叉树
// 其中：希尔，快速，堆都是不稳定的，归并，桶，基数是稳定的
//桶排序：范围最小
int n;
int b[10000];//临时数组，用来排序
int a[100];//排序数组
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
	for (int i = 0; i < n;i++) {//遍历
		int min = i;//记录最小值
		for (int j = i; j < n;j++) {//遍历未经过的数组的下标
			if (a[j]<a[min]) {
				min = j;//重新记录最小值
			}
		}
		if (i!=min) {//优化（如果始终是i最小，就不交换）
			swap(a[i], a[min]);
		}
	}
}
//不熟悉
void inst(int n,int a[]) {//从小到大
	for (int i = 1; i < n;i++) {//从第二个数开始插入
		int x = a[i];//存储需要插入的量
		int t = i - 1;//记录下标
		while (x<=a[t] && t >= 0) {
			a[t+1] = a[t];//往后移动
			t--;
		}
		a[t + 1] = x;
	}
}
void bowl() {//桶排序
	cin >> n;
	for (int i = 0; i < n;i++) {
		int t;
		cin >> t;
		b[t] += 1;//标记这个数他已经是排序的了
	}
	for (int i = 0; i <=1000;i++) {
		if (b[i]!=0) {
			cout << i << " ";
		}
	}
}
void sort(int l,int r) {//从小到大
	if (l<r) {
		int i, j;//移动的下标
		i = l, j = r;
		int mid = a[(l + r) / 2];//基准数
		while (i <= j) {//处理越界
			while (a[i] < mid)i++;
			while (a[j] > mid)j--;
			if (i<=j) {//如果找到交换就接着往前移动，假如是等于，那么就也执行i++，j--
				swap(a[i], a[j]);
				i++;
				j--;
			}
			
		}
		
		//递归调用
		sort(i,r);//从a[0]开始,到mid-1结束
		sort( l, j);
	}
}
void shell() {
	int gap = n / 2;
	for (gap = n / 2; gap <= n;gap++) {
		for (int begin = 0; begin < gap; begin++) {//从第二个数开始插入
			for (int i = begin; i < n;i+=gap) {//间隔
				int x = a[i];//存储需要插入的量
				int t = i - 1;//记录下标
				while (x <= a[t] && t >= 0) {
					a[t + 1] = a[t];//往后移动
					t--;
				}
				a[t + 1] = x;
			}
			
		}
	}
	
}
int t[10000];//放置数组
int ans = 0;
void msort(int l, int r) {
	if (l == r) {//如果到达边界
		return;
	}
	int mid = (l + r) / 2;//中间数
	msort(l, mid); //分解左边
	msort(mid + 1, r); //右边
	//合并
	int i = l, j = mid + 1, k = l;//i 代表左边的开始下标 j 代表右边的开始下标
	while (i <= mid && j <= r) {//防止 i j 越界
		if (a[i] <= a[j]) {
			t[k++] = a[i++];
		}
		else {
			t[k++] = a[j++];
			ans += mid - i + 1;//逆序对
		}
	}
	while (i <= mid) {//处理左边数组
		t[k++] = a[i++];
	}
	while (j <= r) {//处理右边数组
		t[k++] = a[j++];
	}
	for (int i = l; i <= r; i++) {//合并
		a[i] = t[i];
	}
}
int main (){
	cin >> n;
	for (int i = 0; i < n;i++) {
		cin >> a[i];
	}
	//冒泡排序
	/*maopao(n,a);*/
	//选择排序
	/*choose(n, a);*/
	//插入排序
	/*inst(n, a);*/
	//快速排序
	/*sort(0,n-1);*/
	//希尔排序(插入的升级)
	/*shell();*/
	msort(0,n-1);
	for (int i = 0; i < n;i++) {
		cout << a[i] << " ";
	}
	//桶排序
	/*bowl();*/
	return 0;
}