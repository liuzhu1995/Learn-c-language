#include <stdio.h>
/*������ݺ������������Ӧ�������ա�Ҫ����͵��ú���month_day(year, yearday, *pmonth, *pday)
year �� yearday���� *pmonth �� *pday ��*/
void month_day(int year, int yearday, int *pmonth, int *pday);
int main(void) {
	int day, month, year, yearday;
	printf("Input year and yearday:");
	scanf("%d %d", &year, &yearday);
	
	month_day(year, yearday, &month, &day);
	printf("%d-%d-%d", year, month, day);
	
	return 0;
}

void month_day(int year, int yearday, int *pmonth, int *pday) {
	int leap, j;
	int tab[2][13] = {
		{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},  /*������*/
		{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, /*����*/
	};
	leap = year % 4 == 0;
	printf("leap=%d\n", leap);
	for (j = 1; yearday > tab[leap][j]; j++) {
		yearday -= tab[leap][j];
	}
	printf("j=%d, yearday=%d \n", j, yearday);
	*pmonth = j;
	*pday = yearday;
} 
