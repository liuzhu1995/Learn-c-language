#include <stdio.h>
#include <string.h>
/*输入五个字符串 查找其中最小的字符串*/
int main(void) {
	int i;
	char str[80], smin[80];
	
	printf("Enter five string:");
	scanf("%s", str);
	//将输入的字符串复制给smix
	strcpy(smin, str);
	for (i = 1; i < 5; i++) {
		scanf("%s", str);
		//如果刚刚输入的字符串小于smin中保存的字符串就替换 
		if (strcmp(str, smin) < 0) {
			strcpy(smin, str);
		} 
	} 
	printf("min string is %s", smin);
	return 0;
}
