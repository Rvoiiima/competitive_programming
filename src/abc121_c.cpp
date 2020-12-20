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
#define MAX 100001

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


int main() {
    int N, M;

    vector <pair <ll,ll> > AB;

   

    cin >> N >> M;
    ll A, B;

    for(int i=0; i<N; i++) {
        cin >> A >> B;
        AB.push_back(make_pair(A, B));
    }

    sort(AB.begin(), AB.end());

    ll ans = 0;
    for(int i=0; i<N; i++) {
        if (M >= AB[i].second) {
            ans += AB[i].first * AB[i].second;
            M -= AB[i].second;
        } else if (M < AB[i].second) {
            ans += AB[i].first * M;
            break;
        }

    }

    cout << ans << endl;
    return 0;
}
