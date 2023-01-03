// https://dmoj.ca/problem/ccc02s2

#include <iostream>
#include <cmath>
using namespace std;

long long gcf(long long a, long long b) {
	if(a == 0) {
		return 0;
	}
	long long i = a;
	while((a%i != 0 && i > 0) || (b%i != 0 && i > 0)) {
		i--;
	}
	return i;
}

int main() {
	long long a, b, c, d;
	cin >> a;
	cin >> b;

	c = floor((double)a/(double)b);
	a -= c*b;
	d = gcf(a, b);

	if(c == 0 && d == 0) { cout << c; }
	if(c > 0) { cout << c; }
	if(c > 0 && d > 0) { cout << " "; }

	if(d > 0) { cout << a/d << "/" << b/d; }

	cout << endl;
}