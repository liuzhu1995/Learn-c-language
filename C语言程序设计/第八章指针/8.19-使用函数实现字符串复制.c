#include <stdio.h>
/*����һ���ַ���t��һ��������m ���ַ���t�д�m���ַ���ʼ��ȫ���ַ�
���Ƶ��ַ���s�� ������ַ���s.Ҫ���Զ��岢���ú���
void strmcpy(char *s, char *t, int m)*/

void strmcpy(char *s, char *t, int m);
int main(void) {
	char s[20], t[20];
	int m;
	
	printf("Enter string t:");
	scanf("%s", &t);
	printf("Enter integer m:");
	scanf("%d", &m);
	strmcpy(s, t, m);
	printf("s=%s", s);
	return 0;
} 

void strmcpy(char *s, char *t, int m) {
	int i, j;
	for (i=j=0; t[i] != '\0'; i++) {
		if (i+1 >= m) {
			s[j] = t[i];
			j++;
		}
	}
	s[j] = '\0';
}
