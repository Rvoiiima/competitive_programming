#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;

int main(void) {
    int a, b, k, c;
    scanf("%d %d %d", &a, &b, &k);
    vector<int> kth;
     
    c=a;
    if(a>b)c=b;
    int count = 0;
    for(int i=1;i<=c;i++) {
        if(a%i==0&&b%i==0) {
            count ++;
            kth.push_back(i);
        }
    }

    sort(kth.begin(), kth.end(), std::greater<int>());

    printf("%d\n", kth[k-1]);


    return 0;
    }
