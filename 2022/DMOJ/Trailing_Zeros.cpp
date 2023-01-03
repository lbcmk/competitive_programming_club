// https://cses.fi/problemset/task/1618

#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;

	long long a = 1, b=0;
	for(int i = n; i > 0; i--) {
		a = i;
		while(a % 10 == 0) {
			b++;
			cout << a << " ";
			a /= 10;
		}

		// cout << b << " ";
	}

	// cout << b;
}