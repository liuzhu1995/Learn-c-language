#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[80], str2[80], str3[80];
	
	//gets���� puts��� 
	printf("Enter str1:"); 
	gets(str1);
	puts(str1);
	
	//strcpy �ַ�������
	strcpy(str2, str1);
	printf("s2=%s\n", str2);
	
	//strcat �ַ�������
	printf("Enter str3:"); 
	gets(str3);
	printf("str3=%s\n", str3);
	strcat(str2, str3);
	printf("str2=%s\n", str2);
	
	//strcmp �ַ����Ƚ�
	
	if (strcmp("coffee", "milk") == 0) {
		printf("'coffee'��'milk'���"); 
	} else {
		printf("'coffee'��'milk'�����"); 
	};
	if (strcmp("cat", "cat") == 0) {
		printf("'cat'��'cat'���"); 
	} else {
		printf("'cat'��'cat'�����"); 
	};
	return 0; 
	
}
