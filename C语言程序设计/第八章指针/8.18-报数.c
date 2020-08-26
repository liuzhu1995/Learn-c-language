#include <stdio.h>
#include <stdlib.h>
/*有n个人围城一圈，按顺序从1到n编号号。从第一个人开始报数，报到
m(m<n)的人退出圈子，下一个人从1开始报数，报到m的人退出圈子
如此下去直到留下最后一个人。输入整数n和m 并按退出顺序输出编号*/ 
int main(void) {
	int i, n, m, count, total, *p;
	printf("Enter integer n:");
	scanf("%d", &n);
	if ((p= (int *) calloc(n, sizeof(int))) == NULL) {
		printf("分配内存空间失败");
		exit(0); 
	}
	
	printf("Enter integer m:");
	scanf("%d", &m);
	total = count = i = 0; //total退出人数  count记录是否和m相等 
	while (total < n-1) { //当还剩一个人时结束循环 
		if (p[i] == 0) {//判断是否未淘汰 
			count++;//每次循环到未淘汰的人count+1 
			/*当循环次数 等于m淘汰当前编号设置为-1
			count计数清零 total记录淘汰的人数+1*/ 
			if (count == m) {
				count = 0;
				p[i] = -1;
				total++;
			}
		}
		i++;
		//当i等于n时清零从头开始 
		if (i == n) {
			i = 0;
		}
	}
	for (i=0; i < n; i++) {
		if (p[i] != -1) {
			printf("%d\t", i+1);
		}
	}
	free(p);
	return 0;
}
