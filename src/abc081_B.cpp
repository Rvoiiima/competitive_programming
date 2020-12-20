#include <cstdio>
#include <algorithm>
using namespace std;
int main() {
    int i, N;
    int a[200];
    scanf("%d", &N);
    int flag = 0;
    for(i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    long min_time = 1000000000;
    long current_time = 0;
    for (i = 0; i < N; i++) {
        flag = 0;
        current_time = 0;
        while(!flag) {
            if (a[i] % 2 == 0) {
                a[i] = a[i]/2;
                current_time ++;
            } else {
                flag = 1;
            }
        }
        min_time = min(min_time, current_time);
    }
    printf("%ld\n", min_time);
    return 0;
}
