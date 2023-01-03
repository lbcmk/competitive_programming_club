// https://dmoj.ca/problem/ccc12s3

#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	int n, b, c[2] = {0, 0};
	map<int, int> a;
	map<int, vector<int>> d;

	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> b;
		a[b]++;
	}

	int e = 0, f=0;
	for (auto& it : a) {
		d[it.second].push_back(it.first);
		if(it.second > f) f = it.second;
	}

	for(int i = f; i > 0; i--) {
		if(d.find(i) != d.end()) {
			if(c[1] == 0) {
				c[1] = i;
				c[0] = c[1];
				if(d[i].size() > 1) break;
			} else {
				c[0] = i;
				break;
			}
		}
	}

	for(int i = 0; i < d[c[0]].size(); i++) {
		for(int j = 0; j < d[c[1]].size(); j++) {
			if(abs(d[c[0]][i] - d[c[1]][j]) > e) {
				e = abs(d[c[0]][i] - d[c[1]][j]);
			}
		}
	}
	cout << e;
}