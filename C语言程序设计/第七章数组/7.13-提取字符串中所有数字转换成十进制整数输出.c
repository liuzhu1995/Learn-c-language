#include <stdio.h>
/*输入一个回车符为结束标志的字符串(少于80个字符) 提取其中所有的数字字符
('0'...'9') 将其转换为一个十进制整数输出*/

int main(void) {
	int i, num;
	char str[10];
	
	printf("Enter string:");
	i = 0;
	while ((str[i] = getchar()) != '\n') {
		i++;
	}
	str[i] = '\0';
	num = 0;
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			num = num * 10 + str[i] - '0';
		}
	}
	printf("num=%d \n", num);
	return 0;
} 
