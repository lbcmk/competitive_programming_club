// https://dmoj.ca/problem/ccc16s2

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int q, n;
	long long a[100] = {}, b[100] = {}, c = 0;

	cin >> q;
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for(int i = 0; i < n; i++) {
		cin >> b[i];
	}

	sort(a, a+n);
	sort(b, b+n);

	if(q == 1) {
		for(int i = 0; i < n; i++) {
			c += max(a[i], b[i]);
		}
	} else if(q == 2) {
		for(int i = 0; i < n; i++) {
			c += max(a[i], b[n-i-1]);
		}
	}

	cout << c;

}