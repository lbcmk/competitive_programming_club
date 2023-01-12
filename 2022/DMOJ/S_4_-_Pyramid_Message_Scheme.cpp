// https://dmoj.ca/problem/ccc05s4

#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	string s, c;
	map<string, vector<string>> a;
	cin >> n;

	for(int i = 0; i < n; i++) {
		a.clear();

		cin >> m;
		cin >> c;
		for(int j = 0; j < m-1; j++) {
			cin >> s;
			a[s].push_back(c);
			a[c].push_back(s);
			c = s;
		}

		queue<pair<string, int>> blink;
		vector<string> v;
		int ma = 0;

		blink.push({c, 0});
		v.push_back(c);

		while(blink.size() != 0) {
			ma = max(ma, blink.front().second);

			for(string x : a[blink.front().first]) {
				if(!count(v.begin(), v.end(), x)) {
					v.push_back(x);
					blink.push({x, blink.front().second+1});
				}
			}
			blink.pop();
		}
		
		if(m > 1) {
			cout << (m*10)-(ma*20) << endl;
		} else {
			cout << 0;
		}
	}	
}