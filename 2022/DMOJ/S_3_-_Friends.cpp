// https://dmoj.ca/problem/ccc07s3

#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	int n; cin >> n;
	map<int, vector<int>> fr;
	int a, b;

	for(int i = 0; i < n; i++) {
		cin >> a >> b;
		fr[a].push_back(b);
	}

	cin >> a >> b;
	while(a != 0 && b != 0) {
		queue<pair<int, int>> blink;
		vector<int> v;
		bool f = true;

		blink.push({a, 0});

		while(blink.size() > 0) {
			for(int i : fr[blink.front().first]) {
				if(i == b) {
					f = false;
					cout << "Yes " << blink.front().second << endl;
					break;
				}

				if(!count(v.begin(), v.end(), i)) {
					blink.push({i, blink.front().second+1});
					v.push_back(i);
				}
			}
			blink.pop();
			if(!f) break;
		}

		if(f) cout << "No" << endl;		

		cin >> a >> b;
	}
}