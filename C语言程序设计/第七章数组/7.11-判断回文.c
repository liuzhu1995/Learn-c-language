#include <stdio.h>
/*����һ���Իس�Ϊ������־���ַ���(����80���ַ�) �жϸ��ַ����Ƿ��ǻ���*/

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
