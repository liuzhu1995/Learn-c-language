#include <stdio.h>
/*����һ���س���Ϊ������־���ַ���(����80���ַ�) ��ȡ�������е������ַ�
('0'...'9') ����ת��Ϊһ��ʮ�����������*/

int main(void) {
	int i, num;
	char str[10];
	
	printf("Enter string:");
	i = 0;
	while ((str[i] = getchar()) != '\n') {
		i++;
	}
	str[i] = '\0';
	num = 0;
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			num = num * 10 + str[i] - '0';
		}
	}
	printf("num=%d \n", num);
	return 0;
} 
