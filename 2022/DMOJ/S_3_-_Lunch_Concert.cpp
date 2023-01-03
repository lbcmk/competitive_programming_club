// https://dmoj.ca/problem/ccc21s3

#include <iostream>
#include <cmath>
using namespace std;

long long n, lp, rp, b[200000][3], c=0, d[2], lpp=0;

long long sumpp(long long p) {

	long long x=0, y=0;
	for(long long i = 0; i < n; i++) {
		if(b[i][0] <= p && b[i][0] + b[i][2] >= p) {
			continue;
		} else if(b[i][0] >= p && b[i][0] - b[i][2] <= p) {
			continue;
		}
		else if (b[i][0] > p) {
			x = b[i][0] - b[i][2];
			y += (abs(x-p) * b[i][1]);
		} else {	
			x = b[i][0] + b[i][2];
			y += (abs(p-x) * b[i][1]);
		}
	}

	return y;
}

int main() {
	cin >> n;

	for(long long i = 0; i < n; i++) {
		cin >> b[i][0] >> b[i][1] >> b[i][2];
		c = max(c, b[i][0]);
	}

	lp = c/2;
	rp = lp+1;

	while(abs(c-lpp) > 2) {
		d[0] = sumpp(lp);
		d[1] = sumpp(rp);

		if(d[0] > d[1]) {
			lpp = lp;
		} else {
			c = rp;
		}
		lp = lpp + ((c-lpp)/2);
		rp = lp+1;
	}

	cout << sumpp(lp);
}