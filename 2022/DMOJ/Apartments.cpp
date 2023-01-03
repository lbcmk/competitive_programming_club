// https://cses.fi/problemset/task/1084

#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	int n, m, k, c=0;
	cin >> n >> m >> k;
	vector<int> a(n), b(m);

	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for(int i = 0; i < m; i++) {
		cin >> b[i];
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	
	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	for(int i = 0; i < m; i++) {
		cout << b[i] << " ";
	}

	// for(int i = 0; i < n; i++) {
	// 	for(int j = 0; j < m; j++) {
	// 		if(b[j]-k <= a[i] && b[j]+k >= a[i]) {
	// 			b[j] = 0;
	// 			c++;
	// 		}
	// 	}
	// }

	// cout << c;
}