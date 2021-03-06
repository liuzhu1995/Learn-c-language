#include <stdio.h>
/*利用数组计算斐波那契数列的前10个数，1，1，2，3，5..., 55 
并按每行打印五个数的格式输出 斐波那契数列后一位数等于前两位数的和*/
int main(void) {
	
	int i;
	int f[10] = {1, 1}; /*初始化，生成斐波那契数列前两个数*/
	
	/*计算剩余的八个数*/ 
	for (i = 2; i < 10; i++) {
		f[i] = f[i - 1] + f[i - 2];
	}
	/*输出*/ 
	
	for (i = 0; i < 10; i++) {
		printf("%5d", f[i]);
		if ((i + 1) % 5 == 0) {
			printf("\n");
		} 
	} 
	return 0;
}
