#include <stdio.h>
/*输入一个正整数n(1<n<=10) 再输入n个整数，将它们存入数组a中
1. 输出最小值和它对应的下标
2.将最小值和第一个数交换，输出交换后的n个数 
*/

int main(void) {
	int i, n, index;
	int a[10];
	
	printf("输入n(1<n<=10):");
	scanf("%d", &n);
	
	printf("请输入%d个整数: ", n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	index = 0;
	for (i = 1; i < n; i++) {
		if (a[i] < a[index]) {
			index = i;
		}
	}
	printf("最小值=%d，下标=%d \n", a[index], index);
	
	{
		int t;
		t = a[0];
		a[0] = a[index];
		a[index] = t;
		
		for (i = 0; i < n; i++) {
			printf("a[%d]=%d ", i, a[i]);
		}
	}
	return 0;
}
