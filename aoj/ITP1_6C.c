#include <stdio.h>
int main (void) {
	int n,b,f,r,v,i,j,k,l;
	int a[4][3][10]= {0};
	
	scanf("%d",&n);
	for(i=0 ;i<n ;i++) {
		scanf("%d %d %d %d",&b,&f,&r,&v);
		a[b-1][f-1][r-1] += v;
	}
	
	for(j=0; j<4; j++) {
		for(k=0; k<3; k++) {
			for(l=0; l<10; l++) {
				printf(" %d",a[j][k][l]);
			}
			printf("\n");
		}
		if(j<3) printf("####################\n");
	}
	return 0;
}
 	
	
	
	
	