// https://dmoj.ca/problem/ccc15s3

#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	int n, g, ans = 0, b;
	set<int> s;

	cin >> n >> g;

	for(int i = 1; i <= g; i++) s.insert(i);

	while(ans < n) {
		cin >> b;
		set<int>::iterator a = s.lower_bound(b + 1);
		if(a == s.begin()) break;
		a--;
		s.erase(a);
		ans++;
	}

	cout << ans;
}