#include <stdio.h>
/*����һ���Իس���Ϊ������־���ַ���(����80���ַ���)ͳ�����������ַ�('0'...'9')�ĸ���
'0' ASCII ֵ��48 '1'��49 ת��Ϊ��ֵ '1' - '0'(49 - 48 = 1)*/

int main(void) {
	int i, count;
	char str[80];
	
	/*��ʾ�����ַ���*/
	printf("Enter a string:");
	i = 0;
	while ((str[i] = getchar()) != '\n') {
		i++;
	}
	str[i] = '\0';
	/*ͳ�������ַ������ֵĴ���*/
	count = 0;
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			count++;
		}
	}
	printf("count=%d \n", count);
	return 0;
} 
