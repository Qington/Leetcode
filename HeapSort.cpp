#include <iostream>
#include <vector>
using namespace std;
//MaxHeap.
void print(int a[], int n) {
	for (int j = 0; j<n; j++) {
		cout << a[j] << "  ";
	}
	cout << endl;
}

void HeapDown(int a[], int s, int n) {
	int j = 2 * s + 1;

	while (j<n) {
		if (j + 1<n&&a[j]<a[j + 1])
			j++;//max;
		if (a[s]<a[j]) {
			swap(a[s], a[j]);
			s = j;
			j = 2 * s + 1;
		}
		else {
			break;
		}

	}
	print(a, n);
}

void BulidHeap(int H[], int n) {
	for (int i = (n - 1) / 2; i >= 0; i--) {//i取各父节点.初始化为（n-1）/2,即最末尾的叶节点的父节点，然后一直调整到最末的父节点。
		HeapDown(H, i, n);
	}
}
void HeapSort(int H[], int i, int n) {
	for (int i = n - 1; i>0; i--) {//每次取栈顶的元素放到最后（此处为交换），然后将剩下的部分在调整为最大堆。
		swap(H[i], H[0]);
		HeapDown(H, 0, i);
	}
}

int main() {

	int H[11] = { 3,1,5,7,2,4,9,6,10,8,11 };
	cout << "初始值：";
	print(H, 11);

	BulidHeap(H, 11);
	HeapSort(H, 0, 11);
	print(H, 11);

	system("pause");
	return 0;
}
