#include <stdio.h>
/*����10��������������Щ����ƽ��ֵ����������д���ƽ��ֵ����*/
int main (void) {
	int i;
	double average, sum;
	const int len = 3;
	int a[len];
	
	printf("������%d������:", len);
	
	sum = 0;
	for (i = 0; i < len; i++) {
		scanf("%d", &a[i]);
		sum += a[i];
	}
	printf("sum=%.2f \n", sum);
	//����ƽ��ֵ 
	average = sum / len;
	printf("average=%.2f \n", average);
	
	printf(">%.2f: ", average);
	for (i = 0; i < len; i++) {
		if (a[i] > average) {
			printf("%d ", a[i]);
		}
	}
	return 0;
} 
