#include <stdio.h>
/*���庯��day_of_year(year, month, day) ���㲢���������ն�Ӧ�Ǹ���ĵڼ���*/

int day_of_year(int year, int month, int day);
int main(void) {
	int year, month, day, totalDays;
	/*��ʾ����������*/
	printf("Enter year month day:");
	scanf("%d %d %d", &year, &month, &day);
	/*����day_of_year������������*/ 
	totalDays = day_of_year(year, month, day);
	
	printf("Total days:%d", totalDays);
	return 0;
}

int day_of_year(int year, int month, int day) {
	printf("%d %d %d \n", year, month, day);
	int i, leap; //leap�Ƿ����� 0 false ������  1 true ���� 
	int arr[2][13] = {
		{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},  /*������*/
		{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, /*����*/
	};
	leap = year % 4 == 0 && year % 100;
	printf("leap=%d ", leap);
	for (i = 1; i < month; i++)  {
		day += arr[leap][i];
	} 
	return day;
} 
