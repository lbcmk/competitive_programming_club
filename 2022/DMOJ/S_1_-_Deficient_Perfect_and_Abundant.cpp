// https://dmoj.ca/problem/ccc96s1

#include <iostream>
using namespace std;

int main() {
	int n, a, b[100] = {};
	cin >> n;

	for(int i = 0; i < 100; i++) {
		b[i] = 0;
	}

	for(int i = 0; i < n; i++) {\
		cin >> a;
		for(int j = 1; j <= a/2; j++) {
			if(a%j == 0) {
				b[i] += j;
			}
		}

		if(b[i] == a) {
			cout << a << " is a perfect number." << endl;
		} else if (b[i] < a) {
			cout << a << " is a deficient number." << endl;
		} else if (b[i] > a) {
			cout << a << " is an abundant number." << endl;
		}
	}
}