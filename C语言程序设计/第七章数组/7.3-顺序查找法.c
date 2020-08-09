#include <stdio.h>
/*顺序查找法。输入5个整数，将他们存入数组a中，再输入1个数x，
然后再数组中查找x，如果找到输出相应的下标。否则输出"Not Found"*/ 

int main(void) {
	int i, x;
	int a[5]; 
	
	printf("请输入5个数:");
	for (i = 0; i < 5; i++) {
		scanf("%d", &a[i]);
	}
	printf("\n请输入x:");
	scanf("%d", &x);
	
	for (i = 0; i < 5; i++) {
		if (a[i] == x) {
			printf("Index is %d", i);
			break;
		}
	}
	if (i == 5) {
		printf("Not Found");
	}
	return 0;
}
