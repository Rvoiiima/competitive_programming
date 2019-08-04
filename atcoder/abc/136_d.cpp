#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100001
const ll mod = 1e9+7;

std::vector<int> find_all(const std::string str, const std::string subStr) {
    std::vector<int> result;
 
    int subStrSize = subStr.size();
    int pos = str.find(subStr);
 
    while (pos != std::string::npos) {
        result.push_back(pos);
        pos = str.find(subStr, pos + subStrSize);
    }
 
    return result;
}

int main() {

    string s;
    cin >> s;
    vector<int> ans(s.length(), 0);
    vector<int> findCut = find_all(s, "LR");
    vector<int> findPos = find_all(s, "RL");

    vector<int> space;

    space.push_back(findCut[0]+1);

    for(int i=1; i<findCut.size(); ++i) {
        space.push_back(findCut[i] - findCut[i-1]);
    }
    space.push_back(s.length()-findCut[findCut.size()-1]-1);

    for(int i=0; i<space.size(); ++i) {
        int pos = findPos[i];
        int sp = space[i];

        if (sp % 2 == 0) { 
            ans[pos] = sp / 2;
            ans[pos+1] = sp / 2;
        } else {
            if ( pos % 2 == 1) {
                ans[pos+1] = sp / 2;
                ans[pos] = sp / 2+1;
            } else { 
                ans[pos] = sp / 2;
                ans[pos+1] = sp / 2+1;
            }

        }

    }

    for(int i=0; i<s.length(); i++) {
        cout << ans[i] << " " ;
    }
    cout << endl;
}

