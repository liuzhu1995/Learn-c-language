#include <stdio.h>
/*����һ��������n(1<=n<=6) �ٶ���n�׷���a(i * n + j +1) ����þ����
���Խ���(�������������� i+j = n-1) ���һ�к����һ����Ϊ������Ԫ��֮��*/

int main(void) {
	int i, j, n, count, a[6][6]; 
	
	printf("Enter integer n:");
	scanf("%d", &n);
	
	/*Ϊ����a��Ԫ�ظ�ֵ*/
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
