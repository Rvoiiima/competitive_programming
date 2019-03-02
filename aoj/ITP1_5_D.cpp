#include<cstdio>

int main(void) {
    int n;
    int x;
    scanf("%d", &n);
    for (int i=3; i<=n; i++) {
        if (i%3==0){
        printf(" ");
        printf("%d", i);
        }else{
            x = i;
            while (x>=3){
                if(x%10==3){
               
                    printf(" ");
                    printf("%d", i);
                    break;
                 }
                x = x/10;
            }
        }
    }
    printf("\n");
}
