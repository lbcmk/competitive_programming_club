// https://dmoj.ca/problem/ccc19s1

#include <iostream>
using namespace std;

int main() {
    int a = 1, c=2, d=1;
    string b;
    cin >> b;
    for(int i = 0; i < (int)b.size(); i++) {
        if(b[i] == 'H') {
            if(a > 2){
                a -= 2;
                c=2;
            } else {
                a += 2;
                c=-2;
            }
        } else {
            if(a%2==1){
                a += 1;
                d = -1;
            } else {
                a -= 1;
                d = 1;
            }
        }
    }
    cout << a << " " << a+d << endl << a+c << " " << a+c+d;
}