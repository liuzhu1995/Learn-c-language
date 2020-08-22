#include <stdio.h>
/*调用函数在数组中同时查找最大元素和最小元素的下标返回*/
void find(int *a, int n, int *max, int *min);
int main(void) {
	int max, min, a[] = {5,3,7,9,2,0,4,1,6,8};
	find(a, sizeof(a) / sizeof(a[0]), &max, &min);
	
	printf("max=%d,min=%d\n", max, min);
	return 0;
}
void find(int *a, int n, int *max, int *min) {
	int i;
	*max = *min = 0;
	for (i = 0; i < n; i++) {
		if (a[i] > a[*max]) {
			*max = i;
		}
		if (a[i] < a[*min]) {
			*min = i;
		}
	}
}
