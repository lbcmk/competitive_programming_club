// https://cses.fi/problemset/task/1083

#include <iostream>
using namespace std;

int main() {
	long long n, a, c = 0, b = 0;
	cin >> n;

	// b = (n*n) - (((float)n/2) * (n-1));

	for(int i = 0; i < n; i++) {
		b += n - i;
	}

	for(int i = 0; i < n-1; i++) {
		cin >> a;
		c += a;
	}

	cout << b - c;
}