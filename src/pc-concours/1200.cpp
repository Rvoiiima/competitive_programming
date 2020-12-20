#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<double, int> P;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100001

vector<P > p;
bool pairCompare(const P& firstElof, const P& secondElof)
{
    return firstElof.first < secondElof.first;
}

int main() {
    ll n;
    cin >> n;
    double tmp;

    for(ll i=0; i<n; i++) {
        cin >> tmp;
        p.push_back(make_pair(tmp, i+1));
    }

    stable_sort(p.begin(), p.end(), pairCompare);

    for(int t=0; t<2; t++) {

        for(ll i=0; i<n; i++) {
            cin >> tmp;
            if (p[i].first < tmp) p[i].first = tmp;
        }

    stable_sort(p.begin(), p.end(), pairCompare);
    }

    for(int i=n-1; i>=0; i--) {
        cout << p[i].second << endl;
    }
}

