#include <stdio.h>
/*从键盘输入10本书名和定价并存入结构数组中 从中查找定价最高和最低的
书的名称和定价并输出*/
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
