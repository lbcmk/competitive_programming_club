// https://cses.fi/problemset/task/1621

#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	int n, b, c=0;
	map<int, bool> a;

	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> b;
		if(a.find(b) == a.end()) {
			c++;
			a[b] = true;
		}
	}

	cout << c;
}