#include <stdio.h>
#include <stdlib.h>
/*��n����Χ��һȦ����˳���1��n��źš��ӵ�һ���˿�ʼ����������
m(m<n)�����˳�Ȧ�ӣ���һ���˴�1��ʼ����������m�����˳�Ȧ��
�����ȥֱ���������һ���ˡ���������n��m �����˳�˳��������*/ 
int main(void) {
	int i, n, m, count, total, *p;
	printf("Enter integer n:");
	scanf("%d", &n);
	if ((p= (int *) calloc(n, sizeof(int))) == NULL) {
		printf("�����ڴ�ռ�ʧ��");
		exit(0); 
	}
	
	printf("Enter integer m:");
	scanf("%d", &m);
	total = count = i = 0; //total�˳�����  count��¼�Ƿ��m��� 
	while (total < n-1) { //����ʣһ����ʱ����ѭ�� 
		if (p[i] == 0) {//�ж��Ƿ�δ��̭ 
			count++;//ÿ��ѭ����δ��̭����count+1 
			/*��ѭ������ ����m��̭��ǰ�������Ϊ-1
			count�������� total��¼��̭������+1*/ 
			if (count == m) {
				count = 0;
				p[i] = -1;
				total++;
			}
		}
		i++;
		//��i����nʱ�����ͷ��ʼ 
		if (i == n) {
			i = 0;
		}
	}
	for (i=0; i < n; i++) {
		if (p[i] != -1) {
			printf("%d\t", i+1);
		}
	}
	free(p);
	return 0;
}
