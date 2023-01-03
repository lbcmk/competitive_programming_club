// https://dmoj.ca/problem/ccc96s5

#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	long long n, m, lp=0, rp=0, max=0, lpp=0, rpp=0;

	cin >> n;

	for(long long i = 0; i < n; i++) {
		cin >> m;
		vector<long long> a(m), b(m);

		lp = 0;
		max = 0;

		for(long long j = 0; j < m; j++) {
			cin >> a[j];
		}
		for(long long j = 0; j < m; j++) {
			cin >> b[j];
		}

		while(lp <= m-1) {
			lpp = 0;
			rpp = m-1;
			if(a[lp] != a[lp-1]) {
				while(abs(rpp - lpp) > 1) {
					if(b[(rpp+lpp)/2] >= a[lp]){
						lpp = (rpp+lpp)/2;
					} else if (b[(rpp+lpp)/2] < a[lp]) {
						rpp = (rpp+lpp)/2;
					}
				}

				rp = rpp;
				if(b[rp] == a[lp] && rp - lp > max) {
					max = abs(rp - lp);
				} else {
					rp = lpp;
					if(b[rp] == a[lp] && rp - lp > max) 
						max = abs(rp - lp);
				}
				// cout << lp << " (" << a[lp] << ") " << rp << " (" << b[rp] << ")" << "  " << lpp << " " << rpp << endl;
			}
			lp++;
		}
		cout << "The maximum distance is " << max << endl;
	}
}