#include <stdio.h>


int main(void) {
	int a,b,length,square;
	
	scanf("%d %d", &a, &b);
	
	length = (a+b) * 2;
	square = a*b;
	
	printf("%d %d\n",square,length);
	
	return 0;
}
 	
	