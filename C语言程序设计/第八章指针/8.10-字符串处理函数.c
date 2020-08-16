#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[80], str2[80], str3[80];
	
	//gets输入 puts输出 
	printf("Enter str1:"); 
	gets(str1);
	puts(str1);
	
	//strcpy 字符串复制
	strcpy(str2, str1);
	printf("s2=%s\n", str2);
	
	//strcat 字符串连接
	printf("Enter str3:"); 
	gets(str3);
	printf("str3=%s\n", str3);
	strcat(str2, str3);
	printf("str2=%s\n", str2);
	
	//strcmp 字符串比较
	
	if (strcmp("coffee", "milk") == 0) {
		printf("'coffee'和'milk'相等"); 
	} else {
		printf("'coffee'和'milk'不相等"); 
	};
	if (strcmp("cat", "cat") == 0) {
		printf("'cat'和'cat'相等"); 
	} else {
		printf("'cat'和'cat'不相等"); 
	};
	return 0; 
	
}
