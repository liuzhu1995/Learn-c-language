#include <stdio.h>
/*输入n个整数(1<=n<8)，将他们从小到大排序后输出(使用冒泡排序)*/

void bubble(int a[], int n);
int main(void) {
	int i, n, a[8];
	
	printf("Enter n(n<8):");
	scanf("%d", &n);
	
	//输入元素依次存入a数组中
	printf("Enter a[%d]:", n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	bubble(a, n);
	
	printf("After sort,a[%d]=", n);
	for (i = 0; i < n; i++) {
		printf("%3d", a[i]);
	}
	
	return 0;
}

void bubble(int a[], int n) {
	 int i, j, t;
	 
	 for (i = 1; i < n; i++) {
	 	for (j = 0; j < n - i; j++) {
	 		if (a[j] > a[j+1]) {
	 			t = a[j];
	 			a[j] = a[j+1];
	 			a[j+1] = t;
			 }
		 }
	 } 
}
