#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <string>
#include <sstream>
#include <complex>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
using namespace std;
typedef long long unsigned int ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

vector<int> divisors(int n) {
    vector<int> res;
    for(int i = 1; i*i <= n; ++i) {
        if(n % i != 0) continue;
        res.push_back(i);
        if(n/i == i) continue; // 上の行で追加済み。
        res.push_back(n/i);
    }
    return res;
}

int main() {
    int N, M;

    cin >> N >> M;

    vector<int> divs = divisors(M);

    vector<int>::iterator it = lower_bound(divs.begin(), divs.end(), M/N);

    cout << *it << endl;


    return 0;
}
