// https://dmoj.ca/problem/macs1p5

#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	int n, k;
	cin >> n >> k;
	vector<int> a(n);

	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for(int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}

	
}