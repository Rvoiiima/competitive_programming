#include <stdio.h>
#include <string.h>

int main(void) {
	int i,n,a;
	long sum = 0;
	int max, min;
	
	scanf("%d",&n);
	for (i=0; i<n; i++) {
		scanf("%d",&a);
		sum += a;
		if(i==0) {
			min = a;
			max = a;
		} 
		if(a > max) {
			max = a;
		}else if(a < min) {
			min = a;
		}
	}
	
	printf("%d %d %ld\n", min, max, sum);
	
	return 0;
	
}
		