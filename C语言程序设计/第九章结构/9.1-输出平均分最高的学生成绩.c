#include <stdio.h>
/*����ѧ���Ļ�����Ϣ����ѧ�š����������ſγ̳ɼ��Լ�����ƽ���ɼ�
����n��ѧ���ĳɼ���Ϣ ���㲢���ƽ������ߵ�ѧ����Ϣ*/

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
	printf("����ѧ����ѧ�š������ͳɼ�:\n");
	
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
