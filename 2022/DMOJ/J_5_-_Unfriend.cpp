// https://dmoj.ca/problem/ccc11j5

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, a[6] = {}, b[6] = {}, c = 0;

	cin >> n;	

	for(int i = 0; i < n-1; i++) {
		cin >> a[i];
	}

	for(int i = 0; i < n-1; i++) {
		b[a[i]-1] = 1;
		if(a[i] != n) {
			c += 1;
		}
	}

	if(c > 1) {
		c *= c-1;
	}

	if(n > 3) {
		for(int i = 0; i < n-1; i++) {
			if(b[i] != 0) {
				c++;
			}
			cout << c << endl;
		}
	}

	cout << pow(2, n-1) - c;

}