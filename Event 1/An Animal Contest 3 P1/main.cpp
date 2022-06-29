// Task 1/3 of Event 1
// https://dmoj.ca/problem/aac3p1

#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    if(A < B) {
        if(C < D) cout << "Go to the department store";
        else cout << "Go to the grocery store";    
    } else {
        if(C < D) cout << "Go to the pharmacy";
        else cout << "Stay home";
    }

    cout << endl;
    return 0;
}