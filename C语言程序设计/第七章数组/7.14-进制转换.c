#include <stdio.h>
/*输入一个以'#'符为结束标志的字符串(少于80个字符) 滤去所有的非十六进制(不分大小写)
组成一个新的标识十六进制数字的字符串 输出该字符串并将其转换为十进制数后输出
表示十六进制数字的字符为数字字符('0'...'9')、大写英文字母('A'...'F')小写英文字母('a'...'f') 
将十六进制转换为十进制数公式如下：
number = number * 16 +  hexad[i] - '0' hexad[i]数字字符 
number = number * 16 +  hexad[i] - 'A' + 10 hexad[i]大写字符 
number = number * 16 +  hexad[i] - 'a' + 10 hexad[i]小写字符 
*/

int main(void)  {
	int i, j, number; 
	char str[80], hexad[80];
	
	printf("Enter string:");
	i = 0;
	while ((str[i] = getchar()) != '#') {
		i++;
	}
	str[i] = '\0';
	
	/*过滤掉非十六进制的字符*/
	j = 0;
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] >= '0' && str[i] <= '9' || str[i] >= 'A' && str[i] <= 'F' ||
		str[i] >= 'a' && str[i] <= 'f') {
			hexad[j] = str[i];
			j++;		
		}
	}
	hexad[j] = '\0';
	
	/*输出十六进制*/
	printf("New string:");
	for (i = 0; hexad[i] != '\0'; i++) {
		putchar(hexad[i]);
	} 
	printf("\n");
	
	/*十六进制字符转换为十进制整数*/
	number = 0;
	for (i = 0; hexad[i] != '\0'; i++) {
		if (hexad[i] >= '0' && hexad[i] <= '9') {
			number = number * 16 +  hexad[i] - '0';
		} else if (hexad[i] >= 'A' && hexad[i] <= 'F') {
			number = number * 16 +  hexad[i] - 'A' + 10;
		} else if (hexad[i] >= 'a' && hexad[i] <= 'f') {
			number = number * 16 +  hexad[i] - 'a' + 10;
		}
	}
	/*输出十进制整数*/
	printf("Number=%ld", number);
	return 0;
}
