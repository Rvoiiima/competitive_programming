#include <stdio.h>
int main(void) {
	int a,i=1;
	scanf("%d",&a);
	while(a != 0) {
		printf("Case %d: %d\n",i,a);
		scanf("%d",&a);
		i++;
	}
	return 0;
}
		