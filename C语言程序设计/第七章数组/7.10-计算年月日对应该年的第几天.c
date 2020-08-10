#include <stdio.h>
/*定义函数day_of_year(year, month, day) 计算并返回年月日对应是该年的第几天*/

int day_of_year(int year, int month, int day);
int main(void) {
	int year, month, day, totalDays;
	/*提示输入年月日*/
	printf("Enter year month day:");
	scanf("%d %d %d", &year, &month, &day);
	/*调用day_of_year函数计算总数*/ 
	totalDays = day_of_year(year, month, day);
	
	printf("Total days:%d", totalDays);
	return 0;
}

int day_of_year(int year, int month, int day) {
	printf("%d %d %d \n", year, month, day);
	int i, leap; //leap是否闰年 0 false 非闰年  1 true 闰年 
	int arr[2][13] = {
		{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},  /*非闰年*/
		{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, /*闰年*/
	};
	leap = year % 4 == 0 && year % 100;
	printf("leap=%d ", leap);
	for (i = 1; i < month; i++)  {
		day += arr[leap][i];
	} 
	return day;
} 
