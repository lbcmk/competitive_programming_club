// https://cses.fi/problemset/task/1754

#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	long long n, a, b;
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> a >> b;

		if(a < b) {
			long long c = b;
			b = a;
			a = c;
		}
		// cout << a << " " << b << endl;
		// cout << a-(b*2) << endl;
		if((a+b)%3 == 0) {
			if(a-(b*2) < 0 && a-(b*2)%3 == 0) {
				cout << "YES" << endl;
			} else {
				cout << "NO" << endl;
			}
		} else {
			cout << "NO" << endl;
		}
	}
}