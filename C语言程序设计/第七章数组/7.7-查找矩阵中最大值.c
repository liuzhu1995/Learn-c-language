#include <stdio.h>
/*将1个3 * 2的矩阵存入1个3*2的二维数组中，找出最大值及它的行下标和列下标并输出
如果用变量 row和col分别记录最大值的行下标和列下标，则最大值就是a[row][col]*/

int main(void) {
	int  i, j, row, col;
	int a[3][2];
	
	printf("Enter six integers:\n");
	for (i = 0; i< 3; i++) {
		for (j = 0; j < 2; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	/*按照矩阵输出*/
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			printf("a[%d][%d]=%d  ", i, j, a[i][j]);
		}
		printf("\n");
	} 
	
	/*寻找最大值以及它的行列下标*/
	row = col = 0;
	for (i = 0; i< 3; i++) {
		for (j = 0; j < 2; j++) {
			if (a[i][j] > a[row][col]) {
				row = i;
				col = j;
			}
		}
	}
	/*输出最大值*/
	printf("max number = a[%d][%d] = %d \n", row, col, a[row][col]);
	
	return 0;
}
