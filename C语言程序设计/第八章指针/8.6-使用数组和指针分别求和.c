#include <stdio.h>
/*输入10个整数作为数组元素，分别使用数组和指针来计算并输出他们的和*/

int main(void) {
	int i, sum, a[10], *pa; 
	
	printf("Enter integers:");
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	//使用数组求和 
	sum = 0;
	for (i = 0; i < 10; i++) {
		sum += a[i];
	}
	printf("sum=%d \n", sum);
	printf("a=%d, a+9=%d \n", a, a+9);
	/*使用指针求和 a + 9  a是a数组基地址和a[0]相同  
	一个int数再内存单元占4个字节(4 * 9) a数组最后一个元素的指针地址是a + 4 * 9
	pa初始值就是a[0]指针地址 每次 pa 相当于指针地址加上整型所占内存空间4个字节*/ 
	sum = 0;
	for (pa = a; pa <= a + 9; pa++) {
		sum += *pa;
	}
	 printf("sum=%d \n", sum);
	return 0;
}
