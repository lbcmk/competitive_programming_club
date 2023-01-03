// https://cses.fi/problemset/task/1071

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	long long a, b;

	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> a >> b;

		if(a >= b) {
			if(a%2 == 0) {
				cout << a*a - (b-1) << endl;
			} else {
				cout << ((a*a) - (a-1)) - (a-b) << endl;
			}
		} else {
			if(b%2 == 1) {
				cout << b*b - (a-1) << endl;
			} else {
				cout << ((b*b) - (b-1)) - (b-a) << endl;
			}
		}
	}
}