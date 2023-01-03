// https://dmoj.ca/problem/ccc97s2

#include <bits/stdc++.h>
using namespace std;

vector<array<int, 2>> divisors(const int& a) {
	vector<array<int, 2>> c;
	for(int j = 1; j < sqrt(a); j++)
		if(a%j == 0) {
			c.push_back({j, a/j});
		}

	return c;
}

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n;
	vector<array<int, 2>> b;

	for(int i = 0; i < n; i++) {
		cin >> m;
		b = divisors(m);
		bool f = false;
		for(int j = 0; j < b.size(); j++) {
			for(int k = 0; k < b.size(); k++) {
				if(b[j][1] - b[j][0] == b[k][1] + b[k][0]) {
					cout << m << " is nasty";
					f = true;
					break;
				}
			}
			if(f) break;
		}
		if(!f) cout << m << " is not nasty";
		cout << endl;
	}
}