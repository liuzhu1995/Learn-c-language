#include <stdio.h>
/*����������������ĺ���Ҫ����һ������sum_diff(float op1, float op2, float *psum, float *pdiff)
����op1��op2������������� *psum�� *pdiff�Ǽ���ó��ĺ����*/
void sum_diff(float op1, float op2, float *psum, float *pdiff);
int main(void) {
	float op1, op2, sum, diff;
	
	printf("Enter op1 and op2:");
	scanf("%f %f", &op1, &op2);
	printf("op1=%.2f,op2=%f,sum=%f,diff=%f \n", op1, op2,sum, diff);
	
	sum_diff(op1, op2, &sum, &diff);
	printf("op1=%f,op2=%f,sum=%f,diff=%f \n", op1, op2,sum, diff);
	return 0;
}

void sum_diff(float op1, float op2, float *psum, float *pdiff) {
	*psum = op1 + op2;
	*pdiff = op1 - op2;
} 
