#include <stdio.h>
int main(void) {
	int time,h,m,s;
	scanf("%d",&time);
	h = time/ 3600;
	m = (time % 3600) /60;
	s = (time % 3600) % 60;
	
	printf("%d:%d:%d\n",h,m,s);
	return 0;
}
	