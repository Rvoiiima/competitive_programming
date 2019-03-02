#include <stdio.h>
#define MAX 100005
#define NIL -1
struct Node {
    int p;
    int l;
    int r;
};

struct Node T[MAX];
int n, D[MAX];

void rec( int u, int p ) {
    D[u] = p;
    if (T[u].r != NIL) rec(T[u].r, p);
    if (T[u].l != NIL) rec(T[u].l, p+1);
}

int main(void) {
    int i, j, d, v, c,l, r, u;
    scanf("%d", &n);
    for (i = 0 ; i < n ; i ++) T[i].p = T[i].r = T[i].l = NIL;

    for (i = 0 ; i < n ; i ++) {
        scanf("%d %d",&v, &d);
        for ( j = 0 ; j < d ; j++ ) {
            scanf("%d", &c);
            if (j == 0 ) T[v].l = c;
            else T[l].r = c;
            l = c;
            T[c].p = v;
        }
    }

    for (i = 0 ; i < n ; i ++ ){
        if (T[i].p == NIL ) r = i;
    }
    rec(r, 0);
    
    for (u = 0 ; u < n ; u ++) {

        printf("node %d: parent = %d, depth = %d, ", u, T[u].p, D[u]);

        if ( T[u].p == NIL ) printf("root, ");
        else if (T[u].l == NIL ) printf("leaf, ");
        else printf("internal node, ");

        printf("[") ;
        for ( i = 0 , c = T[u].l; c != NIL ; c = T[c].r, i ++ ) {
            if (i) printf(", ");
            printf("%d",c);
        }

        printf("]\n");
    } 
    return 0;
}
