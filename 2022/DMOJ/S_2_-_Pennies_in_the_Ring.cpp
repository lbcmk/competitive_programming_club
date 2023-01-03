// https://dmoj.ca/problem/ccc08s2

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;

	cin >> n;
	while(n != 0) {
		int b=n;

		for (int i = 1; i < n; i++) {
			b += (int)sqrt(n * n - i * i);
		}

		cout << (b*4)+1 << endl;

		cin >> n;
	}
}