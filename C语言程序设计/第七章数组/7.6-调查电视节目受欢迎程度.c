#include <stdio.h>
/*�������̨8����Ŀ���ܻ�ӭ�ȡ����1~8��1000������ͶƱ��ͳ�Ƹ���Ŀ�ĵ�Ʊ���*/
int main(void) {
	int i, ticket;
	static int count[9];
	
	for (i = 1; i <= 8; i++) {
		printf("������ͶƱ��");
		scanf("%d", &ticket);
		if (1 <= ticket && ticket <= 8) {
			count[ticket]++;
		} else {
			printf("��ЧƱ%d \n", ticket);
		}
	}
	
	for (i = 1; i <= 8; i++) {
		printf("��Ŀ%d��Ʊ=%d \n", i, count[i]);
	}
	
	return 0;
}
