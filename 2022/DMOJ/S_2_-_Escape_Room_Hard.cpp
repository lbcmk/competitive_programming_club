// https://dmoj.ca/problem/ccc20s2hard

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

bool can_escape(int n, int m, vector<vector<int>> a) {
	vector<vector<pair<int, int>>> vals(1000010, vector<pair<int, int>>(0));

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			vals[a[i][j]].push_back({i, j});
		}
	}

	queue<pair<int, int>> blink;
	vector<vector<bool>> v(n+1, vector<bool>(m+1));

	blink.push({n, m});

	if(n == 1 && m == 1) {
		return true;
	}

	while(blink.size() > 0) {
		for(pair<int, int> i : vals[(blink.front().first) * (blink.front().second)]) {
			if(i.first == 1 && i.second == 1) {
				return true;
			}

			if(!v[i.first][i.second]) {
				blink.push(i);
				v[i.first][i.second] = true;
			}
		}
		blink.pop();
	}
	
	return false;
}

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);	

	cout << can_escape(3, 4, {{0, 0, 0, 0, 0},
					{0, 3, 10, 8, 1},
					{0, 1, 11, 12, 12},
					{0, 6, 2, 3, 9}});
	
	cout << can_escape(1, 1, {{0, 0}, {0, 10}});
}
