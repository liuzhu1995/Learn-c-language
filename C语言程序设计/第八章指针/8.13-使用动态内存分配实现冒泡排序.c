#include <stdio.h>
#include <stdlib.h>
/*����һ��������n ����������n������  Ҫ��ʹ�ö�̬�ڴ���䷽��Ϊ
��n����������ռ� Ȼ�����Ǵ�С������������ ʹ��ð������*/

void bubble(int a[], int n);
int main() {
	int i, n, *p;
	
	printf("Enter n:");
	scanf("%d", &n) ;
	//Ϊ����p��̬����n���������ʹ�С�Ŀռ� 
	if ((p= (int *) calloc(n, sizeof(int))) == NULL) {
		printf("�����ڴ�ռ�ʧ��!");
		exit(0);
	}
	printf("Enter a %d integer:", n);
	for (i = 0; i < n; i++) {
		scanf("%d", &p[i]);
	}
	//���� 
	bubble(p, n);
	
	for (i = 0; i < n; i++) {
		printf("%d ", p[i]);
	}
	return 0;
}

void bubble(int a[], int n) {
	int i, j, t;
	for (i = 1; i < n - 1; i++) {
		for (j = 0; j < n - i; j++) {
			if (a[j] > a[j+1]) {
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
}
