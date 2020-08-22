#include <stdio.h>
#include <stdlib.h>
/*输入一个正整数n 再输入任意n个整数  要求使用动态内存分配方法为
这n个整数分配空间 然后将它们从小到大排序后输出 使用冒泡排序*/

void bubble(int a[], int n);
int main() {
	int i, n, *p;
	
	printf("Enter n:");
	scanf("%d", &n) ;
	//为数组p动态分配n个整数类型大小的空间 
	if ((p= (int *) calloc(n, sizeof(int))) == NULL) {
		printf("分配内存空间失败!");
		exit(0);
	}
	printf("Enter a %d integer:", n);
	for (i = 0; i < n; i++) {
		scanf("%d", &p[i]);
	}
	//排序 
	bubble(p, n);
	
	for (i = 0; i < n; i++) {
		printf("%d ", p[i]);
	}
	return 0;
}

void bubble(int a[], int n) {
	int i, j, t;
	for (i = 1; i < n - 1; i++) {
		for (j = 0; j < n - i; j++) {
			if (a[j] > a[j+1]) {
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
}
