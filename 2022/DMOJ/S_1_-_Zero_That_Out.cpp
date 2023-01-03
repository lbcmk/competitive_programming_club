// https://dmoj.ca/problem/ccc15s1

#include <iostream>
using namespace std;

int main() {
	long long a, b[100000] = {}, c, d = 0;

	cin >> a;

	for(int i = 0; i < a; i++) {
		cin >> c;

		if(c != 0) {
			b[d+1] = c;
			d++;
		} else {
			b[d] = 0;
			d--;
		}
	}

	c = 0;

	for(int i = 0; i <= d; i++) {
		c += b[i];
	}

	cout << c;
}