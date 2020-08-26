#include <stdio.h>
/*输入一个字符串t和一个正整数m 将字符串t中从m个字符开始的全部字符
复制到字符串s中 再输出字符串s.要求自定义并调用函数
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
