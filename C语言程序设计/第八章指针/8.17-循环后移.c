#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*��n������,ʹǰ��ĸ���˳�������m��λ�� �Ƴ������ٴ�ͷ����
��������������n������������������n����*/

int main(void) {
	int i, n, m, *p; 
	printf("Enter integer n:");
	scanf("%d", &n);
	
	/*ʹ�ö�̬�ڴ����Ϊ���� p���� n���������ڴ��С�ռ� */ 
	if ((p = (int *) calloc(n, sizeof(int) * n)) == NULL) {
		printf("����ʧ��");
		exit(0); 
	}
	printf("Enter %d integers:", n);
	for (i = 0; i < n; i++) {
		scanf("%d", p+i);
	}
	printf("\n");
	
	//��ʾ����mҪƫ�Ƶ��� 
	printf("Enter m:");
	scanf("%d", &m);
	
	int t, j, index;
	
	for (i = 0; i < n; i++) {
		if ((i + m) < n) {
			index = i + m;
		} else {
			index = i - n + m;
		}
		t = p[index];
		p[index] = p[i];
		p[i] = t;
		for (j = 0; j < n; j++) {
			printf("%d=%d\t", j, p[j]);
		}
	}
	free(p);

	return 0;
} 
