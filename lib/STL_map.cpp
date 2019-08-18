#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 1000010
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;


int main() {
    map<int, const char*> m;

    m.insert(make_pair(1, "ONE"));
    m.insert(make_pair(10, "TEN"));
    m[100] = "HUNDRED";

    map<int, const char*>::iterator ite;
    ite = m.find(1);
    cout << ite->first << " " << ite->second << endl;

    cout << m[10] << endl;




}

