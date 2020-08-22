#include <stdio.h>
#include <stdlib.h>
/*先输入一个正整数n 再输入任意n个整数 计算并输出这n个整数的和
要求使用动态分配方法为这n个整数分配空间*/
int main(void) {
	int i, n, sum, *p;
	
	printf("Enter integer n:");
	scanf("%d", &n);
	//为数组p动态分配n个整数类型大小的空间
	if ((p = (int *) calloc(n, sizeof(int))) == NULL) {
		printf("动态分配内存失败!");
		exit(1);
	}
	
	printf("Enter %d integers:", n);
	for ( i = 0; i < n; i++) {
//		scanf("%d", &p[i]);
		scanf("%d", p + i);
	}
	
	sum = 0;
	for (i = 0; i < n; i++) {
//		sum += p[i];
		sum += *(p+i);
	}
	
	printf("sum=%d\n", sum);
	free(p);
	
	return 0;
}
