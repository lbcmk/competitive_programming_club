// https://dmoj.ca/problem/hkccc08j1

#include <iostream>
using namespace std;

int main() {
    int A, cf = 0, nf = 0, t1, t2;
    cin >> A;

    for(int i = 0; i<A; i++) {
        cin >> t1 >> t2;
        t1 = t1*t2;

        if(t1 > cf) {
            cf = t1;
        }
    }

    cin >> A;

    for(int i = 0; i<A; i++) {
        cin >> t1 >> t2;
        t1 = t1*t2;

        if(t1 > nf) {
            nf = t1;
        }
    }

    if(cf > nf) {
        cout << "Casper";
    } else if (cf < nf) {
        cout << "Natalie";
    } else {
        cout << "Tie";
    }
}