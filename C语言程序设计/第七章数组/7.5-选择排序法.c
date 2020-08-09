#include <stdio.h>
/*输入一个正整数n(1<n<=10) 在输入n个整数，用选择排序法将他们从小到大排序后输出
选择排序法：
1:在未排序的n个数中(a[n] ~ a[n-1])找到最小值及和a[0]交换位置
2:在未排序的n-1个数中(a[1] ~ a[n-1)找到最小值和a[1]交换位置
n-1:在剩下的两个数中(a[n-2] ~ a[n-1])找到最小值相互交换位置 
 
*/

int main(void) {
	
	int i, j, n, temp;
	int a[10]; 
	
	printf("请输入一个整数n(1<n<=10):");
	scanf("%d", &n);
	
	printf("请输入%d个整数:", n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	/*对n个数排序*/
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[j] < a[i]) {
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	
	for (i = 0; i < n; i++) {
		printf("a[%d]=%d ", i, a[i]);
	}
	return 0;	
}
