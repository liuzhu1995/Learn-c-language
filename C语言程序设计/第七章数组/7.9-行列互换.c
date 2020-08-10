#include <stdio.h>
/*输入一个正整数n(1<n<=6) 根据下式生成一个n*n的方阵，将该方阵转置(行列互换)后输出
a[i][j] = i * n + j + 1 (0 <= i <= n-1,0 <= j <= n-1) 
*/

int main(void) {
	int i, j, n, temp;
	int a[6][6];
	
	printf("Enter integers n:");
	scanf("%d", &n);
	//生成二维数组元素 
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			a[i][j] = i * n + j + 1;
		} 
	} 
	//输出数组所有元素 
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%4d ", a[i][j]);
		} 
		printf("\n");
	} 
	//行列元素位置互换
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (i < j) {
				//printf("%d ", a[i][j]);
				temp = a[i][j];
				a[i][j] = a[j][i];
				a[j][i] = temp;
			}
		} 
//		printf("\n");
	}
	printf("---------------\n"); 
	//输出数组行列互换后所有元素 
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%4d ", a[i][j]);
		} 
		printf("\n");
	} 
	
	return 0;
} 
