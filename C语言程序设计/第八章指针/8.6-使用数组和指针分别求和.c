#include <stdio.h>
/*����10��������Ϊ����Ԫ�أ��ֱ�ʹ�������ָ�������㲢������ǵĺ�*/

int main(void) {
	int i, sum, a[10], *pa; 
	
	printf("Enter integers:");
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	//ʹ��������� 
	sum = 0;
	for (i = 0; i < 10; i++) {
		sum += a[i];
	}
	printf("sum=%d \n", sum);
	printf("a=%d, a+9=%d \n", a, a+9);
	/*ʹ��ָ����� a + 9  a��a�������ַ��a[0]��ͬ  
	һ��int�����ڴ浥Ԫռ4���ֽ�(4 * 9) a�������һ��Ԫ�ص�ָ���ַ��a + 4 * 9
	pa��ʼֵ����a[0]ָ���ַ ÿ�� pa �൱��ָ���ַ����������ռ�ڴ�ռ�4���ֽ�*/ 
	sum = 0;
	for (pa = a; pa <= a + 9; pa++) {
		sum += *pa;
	}
	 printf("sum=%d \n", sum);
	return 0;
}
