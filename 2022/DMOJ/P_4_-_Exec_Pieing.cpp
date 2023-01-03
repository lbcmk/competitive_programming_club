// https://dmoj.ca/problem/bsspc22c1p4

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, m, a[20000] = {0}, b[20000] = {0}, c=0, d=0, e=0;

	cin >> n >> m;

	cin >> a[0];
	b[0] = a[0];
	for(int i = 1; i < n; i++) {
		cin >> a[i];
		b[i] += a[i] - b[i-1];
	}

	while(m > c) {
		c += a[d];
		d++;
	}

	sort(b, b+d);

	for(int i = 0; i < n; i++) {
		cout << b[i] << " ";
	}

	e -= b[d-1];
	d = 0;

	while(m > e) {
		e+=a[d];
		d++;
	}

	cout << d - 1;

}