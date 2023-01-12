// https://dmoj.ca/problem/ccc02s3

#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	int r, c, n;
	cin >> r;
	cin >> c;
	vector<vector<bool>> a(r, vector<bool>(c));

	string b;
	for(int i = 0; i < r; i++) {
		cin >> b;
		for(int j = 0; j < c; j++) {
			if(b[j] == '.') {
				a[i][j] = false;
			} else {
				a[i][j] = true;
			}
		}
	}
	
}