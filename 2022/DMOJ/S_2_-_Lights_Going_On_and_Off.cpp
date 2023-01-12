// https://dmoj.ca/problem/ccc09s2

#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n;
	cin >> m;

	set<vector<bool>> p;
	vector<vector<bool>> a(n, vector<bool>(m));
	vector<vector<bool>> c;

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			int b;
			cin >> b;
			a[i][j] = b;
		}
	}

	for(int i = 1; i < n; i++) {
		c = a;
		for(int j = i; j < n; j++) {
			for(int k = 0; k < m; k++) {
				if(c[j][k] == c[j-1][k]) c[j][k] = 0;
				else c[j][k] = 1;
			}
		}
		p.insert(c[n-1]);
	}

	p.insert(a[n-1]);

	cout << p.size() << endl;
}