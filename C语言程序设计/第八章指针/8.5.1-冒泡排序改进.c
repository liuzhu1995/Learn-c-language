#include <stdio.h>
/*根据数据显示有的数据冒泡排序循环到第6遍(n-2)时就已经排好序了
说明有时候并不一定需要n-1次循环。请思考如何让改进冒泡排序算法并实现
(若发现一边循环后没用数据发生交换，说明已经排好序)*/
void bubble(int a[], int size);
void logger(int a[], int size);
int main(void) {
	int i, len, a[8] = {7,3,66,3,-5,22,-77,2};
	len = sizeof(a) / sizeof(a[0]);
	printf("len=%d\n", len);
	bubble(a, len);
	
//	for (i = 0; i < len; i++) {
//		printf("%d ", a[i]);
//	}
	return 0;
}

void bubble(int a[], int size) {
	int i, j, t, m;
	for (i = 1; i < size; i++) {
		printf("m=%d \n", m);
//		m == -1;
		for (j = 0; j < size - i; j++) {
			printf("a[j]=%d, a[j+1]=%d\n", a[j], a[j+1]);
			if (a[j] > a[j+1]) {
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
				m = 1;
			} else {
				m = -1;
			}
		}
		if (m == -1) {
			break;
		}
		logger(a, size);
 	}
}

void logger(int a[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}
