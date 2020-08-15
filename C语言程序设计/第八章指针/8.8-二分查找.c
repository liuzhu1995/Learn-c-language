#include <stdio.h>
/*设已有一个10个元素的整型数组a，且按值从小到大有序排列，输入一个整数x
然后在数组中查找x，如果找到输出相应的下标，否则输出"Not Found"*/

int Bearch(int *pa, int n, int x);
int main(void) {
	int i, x, n, index;
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};;
	
	printf("Enter x integer x:");
	scanf("%d", &x);
	index = Bearch(a, 10, x);
	if (index != -1) {
		printf("index=%d\n", index);
	} else {
		printf("Not Found");
	}
	return 0;
} 

int Bearch(int *pa, int n, int x) {
	int low, hight, mid;
	low = 0;
	hight = n - 1;
	while (low <= hight) {
		mid = (low + hight) / 2;
		if (x == pa[mid]) {
			break;
		} else if (x < pa[mid]) {
			hight = mid - 1;
		} else {
			low = mid + 1;
		}
	}
	if (low <= hight) {
		return mid;
	} else {
		return -1;
	}
}
