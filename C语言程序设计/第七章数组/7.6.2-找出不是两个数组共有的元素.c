#include <stdio.h>
/*输入一个正整数n(1<n<=10) 在输入n个整数 存入第一个数组中；
再输入一个正整数m(1<m<=10) 在输入m个整数 存入第二个数组中
找出不是这两个数组的共有元素*/

int main(void) {
	int i, j, n, m;
	int a[10],  b[10];
	
	printf("请输入正整数n(1<n<=10):");
	scanf("%d", &n);
	
	printf("请输入%d个整数:", n); 
	for ( i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	printf("请输入正整数m(1<n<=10):");
	scanf("%d", &m);
	printf("请输入%d个整数:", m); 
	for ( i = 0; i < m; i++) {
		scanf("%d", &b[i]);
	}
	printf("n数组和m数组的相同元素有：");
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (b[j] == a[i]) {
				printf("%d ", b[j]);
			}
		}
	}
	return 0;
} 
