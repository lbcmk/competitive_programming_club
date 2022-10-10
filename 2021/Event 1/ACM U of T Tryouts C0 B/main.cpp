// Task 2/3 of Event 1
// https://dmoj.ca/problem/acmtryouts0b

#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    for(int i = 0; i < T; i++) {
        int N;
        cin >> N;

        string PA, PB;
        cin >> PA;
        cin >> PB;

        for(int i = N-1; i >= 0; i--) {
            cout << PB[i] << PA[i];
        }
        cout << endl;
    }

}