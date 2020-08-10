#include <stdio.h>
/*读入一个正整数n(1<=n<=6) 再读入n阶方阵a(i * n + j +1) 计算该矩阵除
副对角线(右上至左下连线 i+j = n-1) 最后一列和最后一行以为的所有元素之和*/

int main(void) {
	int i, j, n, count, a[6][6]; 
	
	printf("Enter integer n:");
	scanf("%d", &n);
	
	/*为数组a的元素赋值*/
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			a[i][j] =  i * n + j + 1;
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	printf("----------------------------------\n");
	count = 0; 
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (i+j != n-1 && i != n-1 && j != n-1) {
				count += a[i][j];
				printf("%4d", a[i][j]);
			}
		}
		printf("\n");
	}
	printf("count=%d \n", count);
	return 0;
}
