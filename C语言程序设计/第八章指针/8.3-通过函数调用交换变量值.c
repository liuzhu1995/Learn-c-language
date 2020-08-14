#include <stdio.h>

void swap(int *x, int *y);
int main(void) {
	int a = 1, b = 2;
	int *pa = &a, *pb = &b;
	
	printf("a=%d, b=%d, *pa=%d, *pb=%d \n", a, b, *pa, *pb);
	swap(pa, pb);
	
	printf("a=%d, b=%d, *pa=%d, *pb=%d \n", a, b, *pa, *pb);
	
	return 0;
}

void swap(int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	
}
