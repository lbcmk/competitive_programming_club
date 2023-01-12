// https://dmoj.ca/problem/ccc13s4

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	int n, m, b, c;
	cin >> n >> m;
	vector<vector<int>> a(n+1, vector<int>(0));

	for(int i = 0; i < m; i++) {
		cin >> b >> c;
		a[b].push_back(c);
	}

	queue<int> bl;
	vector<int> v;
	bool f = true;
	
	cin >> b >> c;

	if(b <= n) {
		bl.push(b);
	}

	
	while(bl.size() > 0) {
		for(int i : a[bl.front()]) {
			if(i == c) {
				f = false;
				cout << "yes" << endl;
				break;
			}

			if(!count(v.begin(), v.end(), i)) {
				bl.push(i);
				v.push_back(i);
			}
		}

		bl.pop();
		if(!f) break;
	}

	queue<int> cl;
	v.clear();
	cl.push(c);

	while(cl.size() > 0) {
		if(!f) break;
		for(int i : a[cl.front()]) {
			if(i == b) {
				f = false;
				cout << "no" << endl;
				break;
			}

			if(!count(v.begin(), v.end(), i)) {
				cl.push(i);
				v.push_back(i);
			}
		}

		cl.pop();
	}

	if(f) cout << "unknown" << endl;
}