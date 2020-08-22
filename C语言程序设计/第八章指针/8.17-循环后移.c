#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*有n个整数,使前面的各数顺序向后移m个位置 移出的数再从头移入
在主函数中输入n个整数并输出调整后的n个数*/

int main(void) {
	int i, n, m, *p; 
	printf("Enter integer n:");
	scanf("%d", &n);
	
	/*使用动态内存分配为数组 p生成 n个整数的内存大小空间 */ 
	if ((p = (int *) calloc(n, sizeof(int) * n)) == NULL) {
		printf("分配失败");
		exit(0); 
	}
	printf("Enter %d integers:", n);
	for (i = 0; i < n; i++) {
		scanf("%d", p+i);
	}
	printf("\n");
	
	//提示输入m要偏移的数 
	printf("Enter m:");
	scanf("%d", &m);
	
	int t, j, index;
	
	for (i = 0; i < n; i++) {
		if ((i + m) < n) {
			index = i + m;
		} else {
			index = i - n + m;
		}
		t = p[index];
		p[index] = p[i];
		p[i] = t;
		for (j = 0; j < n; j++) {
			printf("%d=%d\t", j, p[j]);
		}
	}
	free(p);

	return 0;
} 
