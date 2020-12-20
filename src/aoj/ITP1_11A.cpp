#include <iostream>
using namespace std;

class Dice {
public:
    int d[6];
    void roll(int i, int j, int k, int l) {
        int t = d[i];
        d[i] = d[j];
        d[j] = d[k];
        d[k] = d[l];
        d[l] = t;
    }

    void roll_x() {
        roll(0, 1, 5, 4);
    }
    
    void roll_y() {
        roll(0, 2, 5, 3);
    }

    void move(char ch) {
        if (ch == 'N') roll_x();
        if (ch == 'W') roll_y();
        if (ch == 'E') for(int i=0; i<3; ++i) roll_y();
        if (ch == 'S') for(int i=0; i<3; ++i) roll_x();
    }
};


        
int main() {
    Dice dice;
    for(int i=0; i<6; ++i) cin >> dice.d[i];
    string s;
    cin >> s;

    for(int i=0; i<s.size(); ++i) {
        dice.move(s[i]);
    }

    cout << dice.d[0] << endl;
}
