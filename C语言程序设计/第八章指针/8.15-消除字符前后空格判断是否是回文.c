#include <stdio.h>
#include <string.h>

/*�����������ַ�����ǰ��ո� ���ж��Ƿ��ǻ��� 
�����yes �������no*/

int main(void) {
	char s[80], ch, *p, *q;
	int i, j, n;
	printf("Enter string:");
	gets(s);
	//���ַ�����s��ַ��ֵ��ָ�����p 
	p = s;
	/*ͨ��ָ�������ȡ�ַ�����ʼλ�ַ� �ж��Ƿ��ǿո� 
	����ǿո�ı���ʼ��ַ*/ 
	while (*p == ' ') {
		p++;
	}
	
	//��ȡ�����ַ�����Ч���� 
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

