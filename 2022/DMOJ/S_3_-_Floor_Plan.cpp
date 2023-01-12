// https://dmoj.ca/problem/ccc03s3

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int n, r, c;

int exp(vector<string> a, int s, int d, set<pair<int, int>> &b) {
	if(s < 0 || s >= r || d < 0 || d >= c) return 0;

	if(a[s][d] == 'I') return 0;

	if(b.find({s, d}) != b.end()) return 0;
	b.insert({s, d});

	int ans = 1;
	ans += exp(a, s-1, d, b);
	ans += exp(a, s+1, d, b);
	ans += exp(a, s, d-1, b);
	ans += exp(a, s, d+1, b);
	return ans;
}

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n >> r >> c;

	vector<string> a(r);
	set<pair<int, int>> b;
	vector<int> f;

	for(int i = 0; i < r; i++) {
		cin >> a[i];
	}

	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			int g = exp(a, i, j, b);
			if(g > 0) 
				f.push_back(g);
		}
	}

	sort(f.begin(), f.end(), greater<int>());
	int g = 0;

	for(int i : f) {
		if(n - i >= 0) {
			g++;
			n -= i;
		} else {
			break;
		}
	}

	if(g == 1) {
		cout << "1 room, " << n << " square metre(s) left over" << endl;
	} else {
		cout << g << " rooms, " << n << " square metre(s) left over" << endl;
	}
}