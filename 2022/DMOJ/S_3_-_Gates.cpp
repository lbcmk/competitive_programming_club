// https://dmoj.ca/problem/ccc15s3

#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	long long n, g, b, c=0;
	map<long long, bool> a;

	cin >> n;
	cin >> g;

	for(int i = 0; i < g; i++) {
		cin >> b;
		if(a.find(b) == a.end()) {
			a[b] = true;
			c++;
		} else {
			break;
		}
	}

	cout << c;
}