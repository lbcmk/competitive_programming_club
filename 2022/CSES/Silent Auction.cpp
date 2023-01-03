//https://dmoj.ca/problem/ccc21j2

#include <iostream>
using namespace std;

int main() {
    int n, a, c=0;
    string b, d;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> b;
        cin >> a;

        if(a > c){
            d = b;
            c = a;
        }
    }

    cout << d;
}