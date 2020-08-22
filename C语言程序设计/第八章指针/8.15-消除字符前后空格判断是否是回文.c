#include <stdio.h>
#include <string.h>

/*先消除输入字符串的前后空格 再判断是否是回文 
是输出yes 否则输出no*/

int main(void) {
	char s[80], ch, *p, *q;
	int i, j, n;
	printf("Enter string:");
	gets(s);
	//将字符数组s地址赋值给指针变量p 
	p = s;
	/*通过指针变量获取字符的起始位字符 判断是否是空格 
	如果是空格改变起始地址*/ 
	while (*p == ' ') {
		p++;
	}
	
	//获取输入字符的有效长度 
	n = strlen(s);
 	q = s + n - 1;;
	while (*q == ' ') {
		q--;
	}
	printf("p=%s,q=%s,s=%s\n", p, q, s);
	printf("p=%d, q=%d, *p=%c, *q=%c \n", p, q, *p, *q);
	
	while (p < q && *p == *q) {
		printf("p=%s, q=%s\t", p, q);
		++p;
		--q;
		
	}
	printf("\np=%s, q=%s\n", p, q);
	if (p < q) {
		printf("No\n");
	} else {
		printf("Yes\n");
	}
	
	return 0;
}

