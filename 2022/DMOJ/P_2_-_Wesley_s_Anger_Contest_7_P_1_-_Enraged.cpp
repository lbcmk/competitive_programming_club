// https://dmoj.ca/problem/macs1p2

#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	int n, b=2;
	string a[2];
	cin >> n;

	cin >> a[0];
	cin >> a[1];

	for(int i = 0; i < n; i++) {
		if(a[0][i] == 'S' && a[1][i] == 'S') {
			b--;
		}

		if(b < 0) break;
	}

	if(b < 0) {
		cout << "NO";
	} else {
		cout << "YES";
	}
}