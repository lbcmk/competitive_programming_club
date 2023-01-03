#include <iostream>
#include <algorithm>
using namespace std;

long long n, a[100000], lp=0, rp, b, t, c[100000], d, e, f;

int main() {

	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a, a+n);

	d = 0;

	t = 0;
	e = 0;
	for(int i = 0; i < n; i++) {
		if(a[i] > t) {
			t = a[i];
			c[d] = a[i] * (n-i);
			if(c[d] > e) {
				e = c[d];
				f = a[i];
			}
			d++;
		}
	}

	cout << e << " " << f;
}