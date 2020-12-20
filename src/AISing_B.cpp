#include <iostream>
#include <functional>
#include <algorithm>
#include <cstdio>
using namespace std;

int main(void) {
    int n;
    int a, b;
    int P[101];

    scanf("%d", &n);
    scanf("%d", &a);
    scanf("%d", &b);

    for(int i=0; i<n; i++) {
        scanf("%d", &P[i]);
    }

   // sort(P, P+n);

    int easy=0, mid=0, hard=0; 
    for(int j=0; j<n; j++) {
        if (P[j] <= a) easy++;
        else if (P[j] > a && P[j] <= b) mid++;
        else hard++;
    }
    int m = min(easy, mid);
    m = min(m, hard);

    cout << m << endl;
}
        
