#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 1000010
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,s,n) for (int i = s; i < (n); ++i)
const ll mod = 1e9+7;

bool pairCompare(const pair<int, int>& firstElof, const pair<int, int>& secondElof)
{
    return firstElof.first < secondElof.first;
}
int main() {
    int n, m;

    while (cin >> n, n) {
        vector<pair <int, int> >A;
        int h, r;
        rep(i, n) {
            cin >> h >> r;
            A.push_back(make_pair(h, r));
        }
        cin >> m;

        rep(i, m) {
            cin >> h >> r;
            A.push_back(make_pair(h, r));
        }

        stable_sort(A.begin(), A.end());
        pair<int, int> cur = make_pair(-1, -1);
        int ans = 0;

        rep(i, n+m) {
            if (cur.first < A[i].first and cur.second < A[i].second) {
                cur.first = A[i].first;
                cur.second = A[i].second;
                ++ans;
            }
        }

        cout << ans << endl;
    }
        
}

