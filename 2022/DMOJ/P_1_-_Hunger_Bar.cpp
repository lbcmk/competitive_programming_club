// https://dmoj.ca/problem/macs1p1

#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	int h, a, s;

	cin >> h;
	cin >> a;
	cin >> s;

	cout << max(min(h, a) - s, 0);
}