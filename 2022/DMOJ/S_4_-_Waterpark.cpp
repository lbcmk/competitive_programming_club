// https://dmoj.ca/problem/ccc07s4

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	int n, a, b;
	cin >> n >> a >> b;
	vector<vector<int>> m(n+1, vector<int>(0));	
	while(a != 0 && b != 0) {
		m[a].push_back(b);
		cin >> a >> b;
	}

	vector<int> c(10010);
	c[1] = 1;

	for(int i = 1; i <= n; i++) {
		for(int x : m[i]) {
			c[x] += c[i];
		}
	}

	cout << c[n];
}