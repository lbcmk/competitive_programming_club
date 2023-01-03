// https://dmoj.ca/problem/ccc00s1

#include <iostream>
using namespace std;

int main() {
    int aoq, p1, p2, p3, tp = 0;
    
    cin >> aoq;
    cin >> p1;
    cin >> p2;
    cin >> p3;

    while(aoq > 0) {
        if(p1 != 34) {
            p1 += 1;
            aoq -= 1;
        } else {
            p1 = 0;
            aoq += 29;
        }
        tp += 1;

        if(aoq == 0) { break; }

        if(p2 != 99) {
            p2 += 1;
            aoq -= 1;
        } else {
            p2 = 0;
            aoq += 59;
        }
        tp += 1;

        if(aoq == 0) { break; }

        if(p3 != 9) {
            p3 += 1;
            aoq -= 1;
        } else {
            p3 = 0;
            aoq += 8;
        }
        tp += 1;
    }

    cout << "Martha plays " << tp << " times before going broke.";
}