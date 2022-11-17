// https://dmoj.ca/problem/ccc00j1

#include <iostream>
using namespace std;

int main() {
    int w, d;

    cin >> w >> d;

    cout << "Sun Mon Tue Wed Thr Fri Sat\n";
    for(int i = 1; i<w; i++) {
        cout << (string)"    ";
    }

    for(int i = 1; i<=9; i++) {
        cout << (string)"  " << i;
        if((i-8+w)%7 == 0) {
            cout << endl;
        } else {
            cout << " ";
        }
    }

    for(int i = 10; i<=d-1; i++) {
        cout << (string)" " << i;
        if((i-8+w)%7 == 0) {
            cout << endl;
        } else {
            cout << " ";
        }
    }

    cout << " " << d << endl;
}