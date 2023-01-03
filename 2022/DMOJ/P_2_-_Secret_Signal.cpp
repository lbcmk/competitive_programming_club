// https://dmoj.ca/problem/lkp18c2p2

#include <iostream>
using namespace std;

int main() {
	int N, K, lp = 0, rp, c = 0;
	int a[200000] = {}, b[200000] = {};

	cin >> N >> K;

	for(int i = 0; i < N; i++) {
		cin >> a[i];
	}

	b[0] = a[0];

	for(int i = 1; i < N; i++) {
		b[i] = b[i-1] + a[i];
	}

	rp = N - 1;

	for(int i = 0; i < N; i++) {
		while(rp - lp > 0) {
			if((b[rp] - b[lp])%K == 0 && b[rp]-b[lp] > 0) {
				c++;
			}
			rp -= 1;
		}
		if(b[lp]%K == 0) {
			c++;
		}

		lp += 1;
		rp = N - 1;
	}

	cout << c;
}