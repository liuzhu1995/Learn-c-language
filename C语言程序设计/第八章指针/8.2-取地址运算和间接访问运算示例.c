#include <stdio.h>

int main(void) {
	//������ʱ*��ָ�������� ��ָ���������ֵһ����ַ�� *��ʾ��ӷ��������  
	//�������ͱ���a������ָ��p 
	int a = 3, *p;
	
	//����ȡ��ַ�����������a�ĵ�ַ��ֵ��p 
	p = &a;
	printf("a=%d, p=%d, *p = %d \n", a, p, *p);
	
	//���ü�ӷ��������*��pָ��Ĵ洢��Ԫ���ݸ�Ϊ10 
	*p = 10;
	printf("a=%d, p=%d, *p = %d \n", a, p, *p);
	
	printf("Enter a:");
	scanf("%d", &a);
	printf("a=%d, p=%d, *p = %d \n", a, p, *p);
	
	(*p)++;
	printf("a=%d, p=%d, *p = %d \n", a, p, *p);
	
	return 0;
}
