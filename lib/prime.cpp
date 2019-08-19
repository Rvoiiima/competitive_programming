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

map<int, int> prime_factor(int n) {
    map<int, int> res;
    for(int i=2; i*i <= n; ++i) {
        while ( n%i == 0) {
            ++res[i];
            n /= i;
        }
    }
    if ( n != 1) res[n] = 1;
    return res;
}

int main() {
    ll n;
    int N;

    cin >> N;

    for(int i=0; i<N; ++i) {
        cin >> n;
    
        vector<int> divs = divisors(n);

        if ( divs.size() == 2) cout << "yes" << endl;
        else cout << "no" << endl;
    }

}
