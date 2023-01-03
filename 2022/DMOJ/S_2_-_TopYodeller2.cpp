// https://dmoj.ca/problem/ccc04s2

#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	unordered_map<int, int> a;
	vector<int> b(100);
	int c;

	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			cin >> c;
			b[j] += c;
			a[b[j]] = j;
			cout << a[j] << " ";
		}
		cout << endl;
	}
}