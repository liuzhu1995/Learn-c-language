#include <stdio.h>
/*����n������(1<=n<8)�������Ǵ�С������������(ʹ��ð������)*/

void bubble(int a[], int n);
int main(void) {
	int i, n, a[8];
	
	printf("Enter n(n<8):");
	scanf("%d", &n);
	
	//����Ԫ�����δ���a������
	printf("Enter a[%d]:", n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	bubble(a, n);
	
	printf("After sort,a[%d]=", n);
	for (i = 0; i < n; i++) {
		printf("%3d", a[i]);
	}
	
	return 0;
}

void bubble(int a[], int n) {
	 int i, j, t;
	 
	 for (i = 1; i < n; i++) {
	 	for (j = 0; j < n - i; j++) {
	 		if (a[j] > a[j+1]) {
	 			t = a[j];
	 			a[j] = a[j+1];
	 			a[j+1] = t;
			 }
		 }
	 } 
}
