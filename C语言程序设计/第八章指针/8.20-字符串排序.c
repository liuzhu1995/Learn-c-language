#include <stdio.h>
#include <string.h>
/*��������ַ��� ����С�����˳�����*/

int main(void) {
	int i, j;
	char str[5][80], s1[80];
	for (i = 0; i < 5; i++) {
		scanf("%s", &str[i]);
	}
	
	for (i = 1; i < 5; i++) {
		for (j = 0; i < 5 - i; j++) {
			if (strcmp(str[j], str[j+1]) > 0) { //��ǰһ�� �ַ������ں�һ���ַ�������λ�� 
				strcpy(s1, str[j]); //str[j]���Ƶ�str 
				strcpy(str[j], str[j+1]);
				strcpy(str[j+1], s1);
			}
		}
	}
	for (i = 0; i < 5; i++) {
		printf("%s\t", str[i]);
	} 
	
	return 0;
}
