// https://dmoj.ca/problem/ioi14pp2

#include <iostream>
#include <vector>
using namespace std;

int main() {
	long long n, k, d = 0, c, a[1000000] = { 0 }, lp, rp;
	bool f = true;

	cin >> n >> k;
	
	for(int i = 0; i <= n; i++) {
		cin >> c;
		if(c == 1) {
			a[d] = i;
			d++;
		}
	}

	lp = 0;
	rp = d-2;
	c = 0;

	while(lp < rp) {
		if(rp - lp > 0) {
			if(a[rp] - a[lp] > k) {
				rp--;
			} else {
				c++;
				lp = rp;
				rp = d-2;
			}
		}
	}
	for(int i = 1; i < d; i++) {
		if(a[i] - a[i-1] > k) {
			cout << "-1";
			f = false;
			break;
		}
	}

	if(f == true) {
		cout << c;
	}
}