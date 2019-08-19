#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100001


int main() {
    string name[10];
    int am[10], pm[10];

    for(int i=0; i<9; ++i) {
        cin >> name[i] >> am[i] >> pm[i];
    }

    for(int i=0; i<9; ++i) {
        cout << name[i] << " " << am[i]+pm[i] << " " <<  am[i]*200 + pm[i]*300 << endl;
    }
}

