#include <stdio.h>
/*拆分实数的整数与小数部分：要求自定义一个函数
void splitfloat(float x, int *intpart, float *fracpart)
其中x是被拆分的实数 *intpart和*fracpart分别是将x拆分出来
的整数部分和小数部分*/

void splitfloat(float x, int *intpart, float *fracpart); 
int main(void) {
	int intpart;
	float x, fracpart;
	
	printf("Enter float x:");
	scanf("%f", &x);

	splitfloat(x, &intpart, &fracpart);
	printf("intpart=%d, fracpart=%f\n", intpart, fracpart);
	
	return 0;
} 
void splitfloat(float x, int *intpart, float *fracpart) {
	//利用强制类型转换获得整数部分赋值给 *intpart指向的变量 
	*intpart = (int) x;
	//获得小数部分 
	*fracpart = x - *intpart;
	
} 
