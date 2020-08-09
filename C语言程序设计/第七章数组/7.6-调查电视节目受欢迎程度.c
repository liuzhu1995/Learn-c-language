#include <stdio.h>
/*调查电视台8个栏目的受欢迎度。编号1~8，1000名观众投票，统计个栏目的的票情况*/
int main(void) {
	int i, ticket;
	static int count[9];
	
	for (i = 1; i <= 8; i++) {
		printf("请输入投票：");
		scanf("%d", &ticket);
		if (1 <= ticket && ticket <= 8) {
			count[ticket]++;
		} else {
			printf("无效票%d \n", ticket);
		}
	}
	
	for (i = 1; i <= 8; i++) {
		printf("栏目%d得票=%d \n", i, count[i]);
	}
	
	return 0;
}
