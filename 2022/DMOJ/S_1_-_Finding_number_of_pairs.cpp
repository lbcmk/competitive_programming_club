// https://dmoj.ca/problem/hkccc15s1

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
long long b=0;

int main() {
	cin >> n >> m;
	vector<int> a(n);


	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a.begin(), a.end());

	for(int i = 0; i < n; i++) {
		if(a[i]*2 > m) {
			break;
		}
		int lp=i+1, rp=n, l=0;
		while(rp - lp > 1) {
			l = (rp+lp)/2;
			if(a[i]+a[l] <= m) {
				lp = l;
			} else {
				rp = l;
			}
		}
		// cout << i << " " << lp << " " << rp << " " << a[l] << " " << l << endl;
		if(i < lp && a[i]+a[lp] <= m) {
			b += lp-i;
		}
	}

	cout << (b%(1000000007));
	
}