// https://dmoj.ca/problem/wossoly22j2

#include <iostream>
using namespace std;

int main() {
	int n, a[2000], b=1, c=1, d=0, e=0;
	cin >> n;

	cin >> a[0];
	
	for(int i = 1; i < n; i++) {
		cin >> a[i];

		if(a[i] > a[i-1]) {
			b++;
		} else {
			b = 1;
		}
		if(a[i] < a[i-1]) {
			c++;
		} else {
			c = 1;
		}

		if(b > d) {
			d = b;
		}
		if(c > e) {
			e = c;
		}
	}

	cout << d << endl << e;
}