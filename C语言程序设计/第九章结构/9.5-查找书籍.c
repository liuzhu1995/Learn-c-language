#include <stdio.h>
/*�Ӽ�������10�������Ͷ��۲�����ṹ������ ���в��Ҷ�����ߺ���͵�
������ƺͶ��۲����*/
struct book {
	char name[20];
	double price;
}; 
int main(void) {
	int i;
	struct book list[10], maxBook, minBook;
	printf("Enter book name and price:");
	scanf("%s %lf", &list[0].name, &list[0].price);
	maxBook = minBook = list[0];
	for (i=1; i < 10; i++) {
		printf("Enter book name and price:");
		scanf("%s %lf", &list[i].name, &list[i].price);
		if (list[i].price > maxBook.price) {
			maxBook = list[i];
		}
		if (list[i].price < minBook.price) {
			minBook = list[i];
		}
	}
	
	printf("Max price book name=%s price=%.1f\n", maxBook.name, maxBook.price);
	printf("Min price book name=%s price=%.1f\n", minBook.name, minBook.price);
	return 0;
}
