#include <iostream>
using namespace std;
#define MAX 2000000

int A[MAX+1], H;
void maxHeapify(int i) {
    int  l = 2*i;
    int  r = 2*i+1;
    int largest;
    if ( l <= H && A[l] > A[i] ) {
       largest = l;
    }else{
       largest = i;
    }

    if ( r <= H && A[r] > A[largest] ) {
        largest = r;

    }

    if (largest != i) {
        swap(A[i],A[largest]);
        maxHeapify(largest);
    }
}
int main (void) {
    int i;

    cin >> H;

    for(i = 1; i <= H ; i++ ) {
        cin >> A[i];
    }

    for(i = H/2 ; i >= 1 ; i--) {
        maxHeapify(i);
    }

    for ( i = 1 ; i <= H ; i++ ) {
        cout << " " << A[i];
    }
    cout << endl;

    return 0;
}
