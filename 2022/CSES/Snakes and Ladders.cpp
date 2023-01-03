// https://dmoj.ca/problem/ccc03s1

#include <iostream>
using namespace std;

int main() {
    int sq = 1, b;

    while(sq < 100) {
        cin >> b;
        if(b < 2 || b > 12) {
            cout << "You Quit!" << endl;
            break;
        } else if(sq+b <= 100) {
            sq += b;
        }
        if(sq == 9) {
            sq = 34;
        } else if (sq == 40) {
            sq = 64;
        } else if (sq == 67) {
            sq = 86;
        } else if (sq == 54) {
            sq = 19;
        } else if (sq == 90) {
            sq = 48;
        } else if (sq == 99) {
            sq = 77;
        }
        cout << "You are now on square " << sq << endl;
        if(sq == 100) {
            cout << "You Win!";
        }
    }
}