#include <stdio.h>
/*��1��3 * 2�ľ������1��3*2�Ķ�ά�����У��ҳ����ֵ���������±�����±겢���
����ñ��� row��col�ֱ��¼���ֵ�����±�����±꣬�����ֵ����a[row][col]*/

int main(void) {
	int  i, j, row, col;
	int a[3][2];
	
	printf("Enter six integers:\n");
	for (i = 0; i< 3; i++) {
		for (j = 0; j < 2; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	/*���վ������*/
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			printf("a[%d][%d]=%d  ", i, j, a[i][j]);
		}
		printf("\n");
	} 
	
	/*Ѱ�����ֵ�Լ����������±�*/
	row = col = 0;
	for (i = 0; i< 3; i++) {
		for (j = 0; j < 2; j++) {
			if (a[i][j] > a[row][col]) {
				row = i;
				col = j;
			}
		}
	}
	/*������ֵ*/
	printf("max number = a[%d][%d] = %d \n", row, col, a[row][col]);
	
	return 0;
}
