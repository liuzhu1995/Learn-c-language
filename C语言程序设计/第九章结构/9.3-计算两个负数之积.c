#include <stdio.h>
//设z1=a+bi，z2=c+di(a、b、c、d∈R)是任意两个复数，那么它们的积(a+bi)(c+di)=(ac-bd)+(bc+ad)i。
//其实就是把两个复数相乘，类似两个多项式相乘，展开得: ac+adi+bci+bdi2，因为i2=-1，所以结果是(ac－bd)+(bc+ad)i 。两个复数的积仍然是一个复数
/*编写程序利用结构变量求解两个复数之积 (a1+a2i) * (b1+b2i) 实部 a1*b1 - a2*b2 虚部 a1*b2+a2*b1*/
struct plural {
	int real, ima;
}; 
int main(void) {
	struct plural a = {4,5}, b ={6, 9}, result;
	result.real = a.real * b.real - a.ima * b.ima;
	result.ima =  a.real * b.ima +  a.ima * b.real;
	printf("(%d+%di) * (%d+%di)=%d+%di", a.real, a.ima, b.real, b.ima, result.real, result.ima);
	return 0;
}
