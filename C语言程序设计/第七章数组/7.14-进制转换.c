#include <stdio.h>
/*����һ����'#'��Ϊ������־���ַ���(����80���ַ�) ��ȥ���еķ�ʮ������(���ִ�Сд)
���һ���µı�ʶʮ���������ֵ��ַ��� ������ַ���������ת��Ϊʮ�����������
��ʾʮ���������ֵ��ַ�Ϊ�����ַ�('0'...'9')����дӢ����ĸ('A'...'F')СдӢ����ĸ('a'...'f') 
��ʮ������ת��Ϊʮ��������ʽ���£�
number = number * 16 +  hexad[i] - '0' hexad[i]�����ַ� 
number = number * 16 +  hexad[i] - 'A' + 10 hexad[i]��д�ַ� 
number = number * 16 +  hexad[i] - 'a' + 10 hexad[i]Сд�ַ� 
*/

int main(void)  {
	int i, j, number; 
	char str[80], hexad[80];
	
	printf("Enter string:");
	i = 0;
	while ((str[i] = getchar()) != '#') {
		i++;
	}
	str[i] = '\0';
	
	/*���˵���ʮ�����Ƶ��ַ�*/
	j = 0;
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] >= '0' && str[i] <= '9' || str[i] >= 'A' && str[i] <= 'F' ||
		str[i] >= 'a' && str[i] <= 'f') {
			hexad[j] = str[i];
			j++;		
		}
	}
	hexad[j] = '\0';
	
	/*���ʮ������*/
	printf("New string:");
	for (i = 0; hexad[i] != '\0'; i++) {
		putchar(hexad[i]);
	} 
	printf("\n");
	
	/*ʮ�������ַ�ת��Ϊʮ��������*/
	number = 0;
	for (i = 0; hexad[i] != '\0'; i++) {
		if (hexad[i] >= '0' && hexad[i] <= '9') {
			number = number * 16 +  hexad[i] - '0';
		} else if (hexad[i] >= 'A' && hexad[i] <= 'F') {
			number = number * 16 +  hexad[i] - 'A' + 10;
		} else if (hexad[i] >= 'a' && hexad[i] <= 'f') {
			number = number * 16 +  hexad[i] - 'a' + 10;
		}
	}
	/*���ʮ��������*/
	printf("Number=%ld", number);
	return 0;
}
