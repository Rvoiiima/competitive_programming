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
    int N, M, C;
    int A[20][20];
    int B[20];

    cin >> N >> M >> C;
    for (int i=0; i<M; i++) {
        cin >> B[i];
    }

    for (int j=0; j<N; j++) {
        for (int k=0; k<M; k++) {
            cin >> A[j][k];
        }
    }

    int sum=0, ans=0;
    for (int j=0; j<N; j++) {
        sum = 0;
        for(int k=0; k<M; k++) {
            sum += A[j][k] * B[k];
        }

        sum += C;
        if (sum >0) {
            ++ans;
        }
    }

    cout << ans << endl;
}

