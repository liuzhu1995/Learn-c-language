#include <stdio.h>
/*���ʵ����������С�����֣�Ҫ���Զ���һ������
void splitfloat(float x, int *intpart, float *fracpart)
����x�Ǳ���ֵ�ʵ�� *intpart��*fracpart�ֱ��ǽ�x��ֳ���
���������ֺ�С������*/

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
	//����ǿ������ת������������ָ�ֵ�� *intpartָ��ı��� 
	*intpart = (int) x;
	//���С������ 
	*fracpart = x - *intpart;
	
} 
