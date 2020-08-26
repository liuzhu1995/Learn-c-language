#include <stdio.h>
/*�ýṹ���ͱ�ʾʱ������(ʱ����) ����һ��ʱ����ֵ ������һ������n(n<60)
��h:m:s�ĸ�ʽ�����ʱ���ٹ�n����ʱ��ֵ(����24���0�㿪ʼ��ʱ)*/
struct time {
	int hour;
	int minute;
	int second;
};
void timeForamt(struct time *p, int n);
int main(void) {
	struct time myTime;
	int n;
	printf("Enter hour minute and second:");
	scanf("%d %d %d", &myTime.hour, &myTime.minute, &myTime.second);
	
	printf("Enter n(n<60):");
	scanf("%d", &n);
	timeForamt(&myTime, n);
	printf("%d:%d:%d", myTime.hour, myTime.minute, myTime.second);

	return 0;
}

void timeForamt(struct time *p, int n) {
	p->second = p->second + n;
	if (p->second >= 60) {
		p->minute = p->minute + p->second / 60;
		p->second  = p->second % 60;
	}
	if (p->minute >= 60) {
		p->hour = p->hour + p->minute / 60;
		p->minute  = p->minute % 60;
	}
	
	if (p->hour >= 24) {
		p->hour = p->hour - 24;
	}
}
