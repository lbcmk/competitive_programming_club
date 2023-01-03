// https://dmoj.ca/problem/macs1p3

#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	int n, b;
	cin >> n;
	vector<int> a(n), c(n);

	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}

	// c = vector<int>(a.begin()+(n-(n/3)), a.end());
	// for(int i = 0; i < cbrt(n)-1; i++) {
	// 	cout << c[0] << endl;
	// }

}