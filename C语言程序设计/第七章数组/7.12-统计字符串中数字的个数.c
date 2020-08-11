#include <stdio.h>
/*输入一个以回车符为结束标志的字符串(少于80个字符串)统计其中数字字符('0'...'9')的个数
'0' ASCII 值是48 '1'是49 转换为数值 '1' - '0'(49 - 48 = 1)*/

int main(void) {
	int i, count;
	char str[80];
	
	/*提示输入字符串*/
	printf("Enter a string:");
	i = 0;
	while ((str[i] = getchar()) != '\n') {
		i++;
	}
	str[i] = '\0';
	/*统计数字字符串出现的次数*/
	count = 0;
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			count++;
		}
	}
	printf("count=%d \n", count);
	return 0;
} 
