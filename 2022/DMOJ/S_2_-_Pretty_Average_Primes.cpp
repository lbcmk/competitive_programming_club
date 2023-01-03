// https://dmoj.ca/problem/ccc19s2

#include <bits/stdc++.h>
using namespace std;

bool prime(int c) {
	if(c%2 == 0) {
		return false;
	}

	for(int i = 3; i <= sqrt(c); i+=2) {
		if(c%i == 0) {
			return false;
		}
	}

	return true;
}

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> m;

		for(int j = ((m%2)+1)%2; j < m; j+=2) {
			if(prime(m-j) && prime(m+j)) {
				cout << m-j << " " << m+j;
				break;
			}
		}
		cout << endl;
	}
}