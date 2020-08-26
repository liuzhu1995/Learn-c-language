#include <stdio.h>
/*假设学生的基本信息包括学号、姓名、三门课程成绩以及个人平均成绩
输入n个学生的成绩信息 计算并输出平均分最高的学生信息*/

struct student  {
	int num;
	char name [10];
	int computer, english, math;
	int average;
};
int main (void) {
	int i, n;
	struct student s1, max;
	
	printf("Enter n:");
	scanf("%d", &n);
	printf("输入学生的学号、姓名和成绩:\n");
	
	for (i = 1; i <= n; i++) {
		printf("No.%d:", i);
		scanf("%d %s %d %d %d", &s1.num, &s1.name, &s1.computer, &s1.english, &s1.math);
		s1.average = (s1.computer + s1.english + s1.math) / 3;
		if (s1.average > max.average) {
			max = s1;
		}
	} 
	printf("First place: number=%d, name=%s, average=%d \n", max.num, max.name, max.average);
	return 0;
}
