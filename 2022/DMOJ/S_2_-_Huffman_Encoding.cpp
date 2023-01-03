// https://dmoj.ca/problem/ccc10s2

#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	map<string, string> a;
	string b, c;

	for(int i = 0; i < n; i++) {
		cin >> b >> c;
		a[c] = b;
	}

	cin >> b;
	c = "";

	for(int i = 0; i < b.size(); i++) {
		c = c + b[i];
		if(a.find(c) != a.end()) {
			cout << a[c];
			c = "";
		}
	}
}