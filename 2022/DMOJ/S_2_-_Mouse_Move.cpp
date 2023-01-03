// https://dmoj.ca/problem/ccc05s2

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, r, d = 0, e = 0;

	cin >> c >> r;
	cin >> a >> b;

	while(a != 0 || b != 0) {
		d += a;
		e += b;

		d = clamp(d, 0, c);
		e = clamp(e, 0, r);


		cout << d << " " << e << endl;

		cin >> a >> b;
	}
}