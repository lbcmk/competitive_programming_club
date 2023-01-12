// https://dmoj.ca/problem/ccc01s3

#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	string c;
	char a, b;
	map<char, vector<char>> d;
	vector<pair<char, char>> rm;
	cin >> c;
	while(c != "**") {
		a = c[0];
		b = c[1];

		d[a].push_back(b);
		d[b].push_back(a);
		rm.push_back({min(a, b), max(a, b)});
		cin >> c;
	}

	stack<pair<char, int>> bl;
	vector<char> v;
	bool f = true;

	bl.push({'A', 0});

	for(int i = 0; i < rm.size(); i++) {
		while(bl.size() > 0) {
			char ch = bl.top().first;
			int ind = bl.top().second;
			bl.pop();
			for(char x : d[ch]) {
				// cout << x << ' ';
				if(x == 'B') {
					cout << "yes" << endl;
					f = false;
					break;
				}
				if(!count(v.begin(), v.end(), x)) {
					if(ch != rm[i].first && x != rm[i].second) {
						bl.push({x, ind+1});
						v.push_back(x);
					}
				}
			}
			cout << endl;

			if(!f) break;
		}
		
		if(f) cout << "no" << endl;
	}

	// stack<pair<char, int>> cl;
	// cl = bl;
	// for(int i = 0; i < bl.size(); i++) {
	// 	cout << cl.top().first << ' ';
	// 	cl.pop();
	// }

}