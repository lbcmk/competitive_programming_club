// https://cses.fi/problemset/task/1069

#include <iostream>
using namespace std;

int main() {
	string a;
	char b;
	long long d = 1, e = 1;

	cin >> a;

	// b = a[0];

	for(long long i = 0; i < a.length(); i++) {
		if(a[i] == a[i+1]) {
			d++;
		} else {
			if(d > e) {
				e = d;
			}
			d = 1;
		}

		b = a[i];
	}

	cout << e;
}