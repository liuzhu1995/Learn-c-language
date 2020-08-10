#include <stdio.h>
/*定义一个3*2的二维数组a，数组元素的值由下式给出，按矩阵形式输出a
a[i][j] = i + j (0 <= i <=2, 0 <=j<=1)*/

int main(void) {
	int i, j;
	int a[3][2];
	
	/*赋值*/ 
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			a[i][j] = i +j;
		}
	}	
	
	/*输出*/
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
