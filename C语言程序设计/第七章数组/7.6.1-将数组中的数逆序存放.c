#include <stdio.h>
/*����һ��������n(1<n<=10)������n����������������a�У��Ƚ�a�е���n����
�����ţ��ٰ�˳���������a�е�n��Ԫ��*/

int main(void) {
	int i, n; 
	static a[10];
	
	printf("������������n��");
	scanf("%d", &n) ;
	
	printf("������%d��������", n);
	/*������*/
	for (i = n - 1; i >= 0; i--) {
		scanf("%d", &a[i]);
	}
	/*�������a��ֵ*/
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	/*������ֵ��˳�����*/
	for (i = n - 1; i >= 0; i--) {
		printf("%d ", a[i]); 
	} 
	return 0;
}
