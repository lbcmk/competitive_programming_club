// https://dmoj.ca/problem/ccc96s3

#include <bits/stdc++.h>
using namespace std;

void pr(int c, int d, string e) {
	if(c == 0 && d == 0) {
		cout << e << endl;
		return;
	}
	if(c == 0) return;
	else {
		if(d > 0)
			pr(c-1, d-1, e+"1");
		pr(c-1, d, e+"0");
	}
	return;
}

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	int n, a, b;
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> a >> b;
		cout << "The bit patterns are" << endl;
		pr(a, b, "");
		if(i != n-1) cout << endl;
	}
}