// https://dmoj.ca/problem/ccc21s2

#include <bits/stdc++.h>
using namespace std;

int n, m, g;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);	

	cin >> n;
	cin >> m;
	cin >> g;

	vector<bool> a(n), b(m);

	char c;
	int d;
	
	for(int i = 0; i < g; i++) {
		cin >> c >> d;
		d--;

		if(c-67) {
			a[d] = !a[d];
		} else {
			b[d] = !b[d];
		}
	}

	int count=0;

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if((int)b[j] + (int)a[i] == 1) {
				count++;
			}
		}
	}
	cout << count;

}