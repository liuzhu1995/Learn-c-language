#include <stdio.h>
/*ƽ�������ӷ�������������άƽ������V1=(x1, y1)��V2=(x2, y2)�ķ���
���㲢������������ĺ�����*/
struct vector {
	double x, y;
}; 
struct vector sum (struct vector *v1, struct vector *v2);
int main(void) {
	struct vector v1, v2, result;
	
	printf("Enter x1 and y1:");
	scanf("%lf %lf", &v1.x, &v1.y);
	
	printf("Enter x2 and y2:");
	scanf("%lf %lf", &v2.x, &v2.y);
	
	result = sum(&v1, &v2);
	printf("result.x=%.2lf,result.y=%.2lf\n", result.x, result.y);
	return 0;
}

struct vector sum (struct vector *v1, struct vector *v2) {
	struct vector v;
	
	v.x = v1->x + v2->x;
	v.y = v1->y + v2->y;
	return v;
}
