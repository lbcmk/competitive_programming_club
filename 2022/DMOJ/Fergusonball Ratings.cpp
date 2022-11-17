// https://dmoj.ca/problem/ccc22j2

#include <iostream>
using namespace std;

int main() {
    int n, a, b, g=0;
    char s = '+';

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a;
        cin >> b;

        if(a*5-b*3 > 40) {
            g++;
        } else {
            s = 0;
        }
    }
    if(s == 0){
        cout << g << endl;
    } else {
        cout << g << s << endl;
    }
}