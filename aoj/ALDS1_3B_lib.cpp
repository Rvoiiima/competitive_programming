#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main (void) {
    int n, q, t;
    string name;

    queue<pair<string,int> > Q;

    cin >> n >> q;

    for ( int i = 0 ; i < n ; i++ ) {
        cin  >> name >> t;
        Q.push( make_pair(name , t));
    }

    int sum = 0, a;
    pair<string,int> u;
    while (!Q.empty()) {
        u = Q.front();
        Q.pop();

        a = min(u.second, q);
        u.second -= a;
        sum += a;

        if(u.second > 0) {
            Q.push(u);
        } else {
            cout << u.first << " " << sum << "\n";
        }

    }

    return 0;
}
