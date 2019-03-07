#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int i, n, x;
    vector<int> v;
    
    cin >> n;
    
    for (i = 0 ; i < n ; i ++){
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    for (i = 0 ; i < n ; i ++) {
        cout << v[i] <<  " ";
    }
    cout << "\n";

    return 0;

}
