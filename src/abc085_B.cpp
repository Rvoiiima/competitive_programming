#include <cstdio>
#include <iostream>
#include <vector>
#include <set>
using namespace std;
void printSet(set<int> &s){
    cout << "size = " << s.size() << endl;
    for(set<int>::iterator it = s.begin();
        it != s.end();
        ++it){
        cout << *it << ", ";
    }
    cout << endl << endl;
}
int main() {
    int n, i;

    scanf("%d", &n);
    vector<int> a(n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    set<int> s(a.begin(), a.end());
    //printSet(s);
    printf("%d\n", int(s.size()));
    return 0;
}
