#include <stdio.h>
/*˳����ҷ�������5�������������Ǵ�������a�У�������1����x��
Ȼ���������в���x������ҵ������Ӧ���±ꡣ�������"Not Found"*/ 

int main(void) {
	int i, x;
	int a[5]; 
	
	printf("������5����:");
	for (i = 0; i < 5; i++) {
		scanf("%d", &a[i]);
	}
	printf("\n������x:");
	scanf("%d", &x);
	
	for (i = 0; i < 5; i++) {
		if (a[i] == x) {
			printf("Index is %d", i);
			break;
		}
	}
	if (i == 5) {
		printf("Not Found");
	}
	return 0;
}
