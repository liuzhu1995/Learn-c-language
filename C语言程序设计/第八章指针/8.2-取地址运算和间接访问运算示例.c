#include <stdio.h>

int main(void) {
	//再声明时*是指针声明符 当指针变量被赋值一个地址后 *表示间接访问运算符  
	//定义整型变量a和整型指针p 
	int a = 3, *p;
	
	//利用取地址运算符将变量a的地址赋值给p 
	p = &a;
	printf("a=%d, p=%d, *p = %d \n", a, p, *p);
	
	//利用间接访问运算符*将p指向的存储单元内容改为10 
	*p = 10;
	printf("a=%d, p=%d, *p = %d \n", a, p, *p);
	
	printf("Enter a:");
	scanf("%d", &a);
	printf("a=%d, p=%d, *p = %d \n", a, p, *p);
	
	(*p)++;
	printf("a=%d, p=%d, *p = %d \n", a, p, *p);
	
	return 0;
}
