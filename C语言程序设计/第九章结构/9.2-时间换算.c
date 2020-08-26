#include <stdio.h>
/*用结构类型表示时间内容(时分秒) 输入一个时间数值 再输入一个秒数n(n<60)
以h:m:s的格式输出该时间再过n秒后的时间值(超过24点从0点开始计时)*/
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
