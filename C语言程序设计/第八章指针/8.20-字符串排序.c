#include <stdio.h>
#include <string.h>
/*输入五个字符串 按由小到大的顺序输出*/

int main(void) {
	int i, j;
	char str[5][80], s1[80];
	for (i = 0; i < 5; i++) {
		scanf("%s", &str[i]);
	}
	
	for (i = 1; i < 5; i++) {
		for (j = 0; i < 5 - i; j++) {
			if (strcmp(str[j], str[j+1]) > 0) { //若前一个 字符串大于后一个字符串互换位置 
				strcpy(s1, str[j]); //str[j]复制到str 
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
