#include <stdio.h>
#include <stdlib.h>
/*������һ��������n ����������n������ ���㲢�����n�������ĺ�
Ҫ��ʹ�ö�̬���䷽��Ϊ��n����������ռ�*/
int main(void) {
	int i, n, sum, *p;
	
	printf("Enter integer n:");
	scanf("%d", &n);
	//Ϊ����p��̬����n���������ʹ�С�Ŀռ�
	if ((p = (int *) calloc(n, sizeof(int))) == NULL) {
		printf("��̬�����ڴ�ʧ��!");
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
