#include <stdio.h>
#include <string.h>
/*��������ַ��� ����������С���ַ���*/
int main(void) {
	int i;
	char str[80], smin[80];
	
	printf("Enter five string:");
	scanf("%s", str);
	//��������ַ������Ƹ�smix
	strcpy(smin, str);
	for (i = 1; i < 5; i++) {
		scanf("%s", str);
		//����ո�������ַ���С��smin�б�����ַ������滻 
		if (strcmp(str, smin) < 0) {
			strcpy(smin, str);
		} 
	} 
	printf("min string is %s", smin);
	return 0;
}
