// https://dmoj.ca/problem/bsspc22c1p3

#include <iostream>
using namespace std;

int main() {
	int n, m, k, a[100][100] = { {0} }, b, c, d=0;

	cin >> n >> m >> k;

	for(int i = 0; i < k; i++) {
		cin >> b >> c;
		a[b][c] = 1;
	}

	for(int i = 0; i < n; i++) {
		for(int i = 0; i < m; i++) {
			d = 0;
			if(a[i][j] == 1) {
				break;
			} else {
				if(a[i-1])
			}
		}
	}
}