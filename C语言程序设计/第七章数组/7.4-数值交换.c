#include <stdio.h>
/*����һ��������n(1<n<=10) ������n�������������Ǵ�������a��
1. �����Сֵ������Ӧ���±�
2.����Сֵ�͵�һ��������������������n���� 
*/

int main(void) {
	int i, n, index;
	int a[10];
	
	printf("����n(1<n<=10):");
	scanf("%d", &n);
	
	printf("������%d������: ", n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	index = 0;
	for (i = 1; i < n; i++) {
		if (a[i] < a[index]) {
			index = i;
		}
	}
	printf("��Сֵ=%d���±�=%d \n", a[index], index);
	
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
