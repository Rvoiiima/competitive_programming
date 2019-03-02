#include <iostream>
using namespace std;
int main() {
    int n, i;
    int t[100001], x[100001], y[100001];
    int dt, dist;
    bool ans=true;


    cin >> n;
    t[0] = x[0] = y[0] = 0;
    for(i=0; i<n; i++) cin >> t[i+1] >> x[i+1] >> y[i+1];
    
    for(i=0; i<n; i++) {
        dt = t[i+1] - t[i];
        dist = abs(x[i+1]-x[i]) + abs(y[i+1]-y[i]);

        if(dist > dt) {
            ans=false;
            break;
        } 
        if(dt%2 != dist%2) {
            ans=false;
            break;
        }
    }

    if (ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
    
}


