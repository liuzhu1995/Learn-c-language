#include <stdio.h>
/*����һ��������n(1<n<=6) ������ʽ����һ��n*n�ķ��󣬽��÷���ת��(���л���)�����
a[i][j] = i * n + j + 1 (0 <= i <= n-1,0 <= j <= n-1) 
*/

int main(void) {
	int i, j, n, temp;
	int a[6][6];
	
	printf("Enter integers n:");
	scanf("%d", &n);
	//���ɶ�ά����Ԫ�� 
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			a[i][j] = i * n + j + 1;
		} 
	} 
	//�����������Ԫ�� 
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%4d ", a[i][j]);
		} 
		printf("\n");
	} 
	//����Ԫ��λ�û���
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
	//����������л���������Ԫ�� 
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%4d ", a[i][j]);
		} 
		printf("\n");
	} 
	
	return 0;
} 
