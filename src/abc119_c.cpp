#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#define REP(i,a,n) for(int i = a;i < n;i++)
#define ll long long 
#define MAX 100000
#define INF 100000000
using namespace std;
 
int N, A, B, C;
int l[10];
 
int dfs(int cur, int a, int b, int c) {
    int ret0, ret1, ret2, ret3;
    if (cur == N) {
        if (a > 0 && b > 0 && c > 0) {
            return abs(a-A) + abs(b-B) + abs(c-C) -30;
        } else {
            return INF;
        }
    }
 
    ret0 = dfs(cur+1, a, b, c);
    ret1 = dfs(cur+1, a+l[cur], b, c) + 10;
    ret2 = dfs(cur+1, a, b+l[cur], c) + 10;
    ret3 = dfs(cur+1, a, b, c+l[cur]) + 10;
 
    return min({ret0, ret1, ret2, ret3});
}
 
int main(void) {
    scanf("%d %d %d %d", &N, &A, &B, &C);
    for (int i=0; i<N; i++) {
        scanf("%d", &l[i]);
    }
 
    printf("%d\n", dfs(0,0,0,0));
}
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#define REP(i,a,n) for(int i = a;i < n;i++)
#define ll long long 
#define MAX 100000
#define INF 100000000
using namespace std;

int N, A, B, C;
int l[10];

int dfs(int cur, int a, int b, int c) {
    int ret0, ret1, ret2, ret3;
    if (cur == N) {
        if (a > 0 && b > 0 && c > 0) {
            return abs(a-A) + abs(b-B) + abs(c-C) -30;
        } else {
            return INF;
        }
    }

    ret0 = dfs(cur+1, a, b, c);
    ret1 = dfs(cur+1, a+l[cur], b, c) + 10;
    ret2 = dfs(cur+1, a, b+l[cur], c) + 10;
    ret3 = dfs(cur+1, a, b, c+l[cur]) + 10;

    return min({ret0, ret1, ret2, ret3});
}

int main(void) {
    scanf("%d %d %d %d", &N, &A, &B, &C);
    for (int i=0; i<N; i++) {
        scanf("%d", &l[i]);
    }

    printf("%d\n", dfs(0,0,0,0));
}
提出情報
提出日時	2019-02-25 17:50:11
問題
