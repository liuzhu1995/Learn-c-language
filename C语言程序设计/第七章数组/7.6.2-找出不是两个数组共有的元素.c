#include <stdio.h>
/*����һ��������n(1<n<=10) ������n������ �����һ�������У�
������һ��������m(1<m<=10) ������m������ ����ڶ���������
�ҳ���������������Ĺ���Ԫ��*/

int main(void) {
	int i, j, n, m;
	int a[10],  b[10];
	
	printf("������������n(1<n<=10):");
	scanf("%d", &n);
	
	printf("������%d������:", n); 
	for ( i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	printf("������������m(1<n<=10):");
	scanf("%d", &m);
	printf("������%d������:", m); 
	for ( i = 0; i < m; i++) {
		scanf("%d", &b[i]);
	}
	printf("n�����m�������ͬԪ���У�");
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (b[j] == a[i]) {
				printf("%d ", b[j]);
			}
		}
	}
	return 0;
} 
