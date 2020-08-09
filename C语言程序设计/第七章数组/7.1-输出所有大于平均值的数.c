#include <stdio.h>
/*输入10个整数，计算这些数的平均值，在输出所有大于平均值的数*/
int main (void) {
	int i;
	double average, sum;
	const int len = 3;
	int a[len];
	
	printf("请输入%d个数字:", len);
	
	sum = 0;
	for (i = 0; i < len; i++) {
		scanf("%d", &a[i]);
		sum += a[i];
	}
	printf("sum=%.2f \n", sum);
	//计算平均值 
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
