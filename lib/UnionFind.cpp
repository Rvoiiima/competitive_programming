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
#define MAXN 10000

ll conv(string num) { stringstream ss; ss << num << flush; ll n; ss>>n; return n; }

string conv(ll n) { stringstream ss; ss << n << flush; return ss.str(); }

vector<string> split(string s, string delim) {
    vector<string> res;
    int pos = 0;
    while(true) {
        int found = s.find(delim, pos);
        if(found >= 0) {
            res.push_back(s.substr(pos, found - pos));
        }
        else {
            res.push_back(s.substr(pos));
            break;
        }
        pos = found + delim.size();
    }
    return res;
}
int ALPH_SIZE = 26;
char ALPH_L[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char ALPH_U[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};


int par[MAXN];
int rnk[MAXN];

void init(int n) {
    for(int i=0; i<n; i++) {
        par[i] = i; // 自分自身が親 = representative
        rnk[i] = 0;
    }
}

int find(int x) {
    if(par[x] == x) return x;
    else return par[x] = find(par[x]); // parx[x] =  で親を付け替え 再帰的にrootを検索
}

bool same(int x, int y) {
    return find(x) == find(y);
}

void unite(int x, int y) {
    //find representatives
    x = find(x);
    y = find(y);
    
    if (x == y) return;

    if (rnk[x] < rnk[y]) {
        par[x] = y; //xの方がrank低い => xをyを親として付け足す
    } else { 
        par[y] = x;
        if (rnk[x] == rnk[y]) ++rnk[x];
    }
}

int main() {
    int n, q, a, b, com;

    cin >> n >> q;

    init(n);
    for(int i=0; i<q; i++) {
        cin >> com >> a >> b;
        if (com == 0) {
            unite(a, b);
        } else {
            if (same(a, b)) cout << 1 << endl;
            else cout << 0 << endl;
        }
    }
}
