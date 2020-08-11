#include <stdio.h>
/*输入一个以回车为结束标志的字符串(少于80个字符) 判断该字符串是否是回文*/

int main(void) {
	int i, k;
	char line[80];
	
	printf("Enter a string:");
	k = 0;
	while ((line[k] = getchar()) != '\n'){
		k++;
	}
	
	i = 0;
	k = k -1;
	while (i < k) {
		if (line[i] != line[k]) {
			break;
		}
		i++;
		k--;
	}
	if (i >= k) {
		printf("It is palindrome.");
	} else {
		printf("It is not a palindrome.");
	}
	return 0;
} 
