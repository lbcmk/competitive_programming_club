// https://dmoj.ca/problem/ccc07s2

#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	int n=0, b[3], m=0, low=2000000000;
	cin >> n;
	vector<array<int, 3>> c(n);

	for(int i = 0; i < n; i++) {
		cin >> b[0] >> b[1] >> b[2];
		sort(b, b+3, greater<int>());

		c[i][0] = b[0];
		c[i][1] = b[1];
		c[i][2] = b[2];
	}

	sort(c.begin(), c.end());

	cin >> m;

	for(int i = 0; i < m; i++) {
		cin >> b[0] >> b[1] >> b[2];
		sort(b, b+3, greater<int>());

		bool f = true;
		low = 2000000000;

		for(int lp = 0; lp < n; lp++) {
			if(b[0] <= c[lp][0] && b[1] <= c[lp][1] && b[2] <= c[lp][2]) {
				if((c[lp][0] * c[lp][1] * c[lp][2]) < low) {
					low = (c[lp][0] * c[lp][1] * c[lp][2]);
				}
				f = false;
			}
		}
		if(f) {
			cout << "Item does not fit." << endl;
		} else {
			cout << low << endl;
		}
	}
}