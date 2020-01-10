#include <iostream>
#include <map>
#include <string>

using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 1000010
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

bool cards[4][13];
map<char, int> markdigit {
    {'S', 0},
    {'H', 1},
    {'C', 2},
    {'D', 3}
};

map<int, char> digitmark {
    {0,'S'},
    {1,'H'},
    {2,'C'},
    {3,'D'}
};
int main() {
    int n;
    cin >> n;
    char tmp_mark;
    int tmp_digit;
    
    rep(i, n) {
        cin >> tmp_mark >> tmp_digit;
        --tmp_digit;
        cards[markdigit[tmp_mark]][tmp_digit]  = true;
    }

    rep(i, 4) {
        rep(j, 13) {
            if(!cards[i][j]) cout << digitmark[i] << " " << j+1 << endl;
        }
    }

}

