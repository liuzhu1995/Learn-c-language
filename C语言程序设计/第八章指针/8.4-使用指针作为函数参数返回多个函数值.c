#include <stdio.h>
/*输入年份和天数，输出对应的年月日。要求定义和调用函数month_day(year, yearday, *pmonth, *pday)
year 年 yearday天数 *pmonth 月 *pday 日*/
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
		{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},  /*非闰年*/
		{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, /*闰年*/
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
