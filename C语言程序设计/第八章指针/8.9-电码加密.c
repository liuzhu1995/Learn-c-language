#include <stdio.h>
#include <string.h>
#define MAXLINE 100

/*������ܣ�Сд��ĸz�任Ϊa��������ĸ�任�ɸ���ĸASCII��˳���һλ����ĸ*/
void encrypt(char *);
int main(void) {
	char line[MAXLINE];
	
	printf("Input the string:");
	gets(line);
	encrypt(line);
	printf("%s%s \n", "After being encrypted:", line);
	
	return 0;
}

void encrypt(char *s) {
	int i;
	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] == 'z') {
			s[i] = 'a';
		} else {
			printf("s[i]=%d, s[i+1]%d \n", s[i], s[i]+1);
			printf("s[i]=%c, s[i+1]%c \n", s[i], s[i]+1);
			s[i] = s[i]+1;
		}
	}
	printf("A=%d, a+1=%d, a=%c", 'a', 'a'+1, 'a'+1);
//	for (;*s != '\0'; s++) {
//		if (*s == 'z') {
//			*s = 'a';
//		} else {
//			*s = *s+1;
//		}
//	}
}
