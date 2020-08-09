#include <stdio.h>
/*输入一个正整数n(1<n<=10)在输入n个整数，存入数组a中，先将a中的这n个数
逆序存放，再按顺序输出数组a中的n个元素*/

int main(void) {
	int i, n; 
	static a[10];
	
	printf("请输入正整数n：");
	scanf("%d", &n) ;
	
	printf("请输入%d个整数：", n);
	/*逆序存放*/
	for (i = n - 1; i >= 0; i--) {
		scanf("%d", &a[i]);
	}
	/*输出数组a的值*/
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	/*将逆序值按顺序输出*/
	for (i = n - 1; i >= 0; i--) {
		printf("%d ", a[i]); 
	} 
	return 0;
}
