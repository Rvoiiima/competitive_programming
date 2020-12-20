#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A;
    cin >> N >> A;

    char op;
    int B;
    for(int i = 0; i < N; ++i) {
        cin >> op;
        cin >> B;
        if(op == '+') {
            A += B;
        } else if(op == '-') {
            A -= B;
        } else if(op == '*') {
            A *= B;
        } else if(op == '/') {
            if(B == 0) {
                cout << "error" << endl;
                return 0;
            }
            A /= B;
        }
        cout << i + 1 << ':' << A << endl;
    }
}