#include <stdio.h>
//��z1=a+bi��z2=c+di(a��b��c��d��R)������������������ô���ǵĻ�(a+bi)(c+di)=(ac-bd)+(bc+ad)i��
//��ʵ���ǰ�����������ˣ�������������ʽ��ˣ�չ����: ac+adi+bci+bdi2����Ϊi2=-1�����Խ����(ac��bd)+(bc+ad)i �����������Ļ���Ȼ��һ������
/*��д�������ýṹ���������������֮�� (a1+a2i) * (b1+b2i) ʵ�� a1*b1 - a2*b2 �鲿 a1*b2+a2*b1*/
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
