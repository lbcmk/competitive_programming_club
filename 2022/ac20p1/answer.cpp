#include <iostream>
using namespace std;

int main() {
	int t, d;
	long long a, b, c;
	cin >> t;

	for(int i = 0; i < t; i++) {
		cin >> a;
		cin >> b;
		cin >> c;

		d = c;
		if(a > c) {
			c = a;
			a = d;
			d = c;
		}
		if(b > c) {
			c = b;
			b = d;
		}

		a = ((a*a) + (b*b));

		b = c*c;

		if(a == b) {
			cout << "R\n";
			continue;
		}
		else if (a > b) {
			cout << "A\n";
			continue;
		}
		else {
			cout << "O\n";
			continue;
		}
	}
}