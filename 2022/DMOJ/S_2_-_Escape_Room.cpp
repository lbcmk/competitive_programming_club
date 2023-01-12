// https://dmoj.ca/problem/ccc20s2

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"


int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;

	vector<vector<int>> a(n, vector<int>(m));
	vector<vector<pair<int, int>>> vals(1000010, vector<pair<int, int>>(0));

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> a[i][j];
			vals[a[i][j]].push_back({i, j});
		}
	}

	queue<pair<int, int>> blink;
	vector<vector<bool>> v(n, vector<bool>(m));

	blink.push({n-1, m-1});

	if(n == 1 && m == 1) {
		cout << "yes";
		return 0;
	}

	while(blink.size() > 0) {
		for(pair<int, int> i : vals[(blink.front().first+1) * (blink.front().second+1)]) {
			if(i.first == 0 && i.second == 0) {
				cout << "yes";
				return 0;
			}

			if(!v[i.first][i.second]) {
				blink.push(i);
				v[i.first][i.second] = true;
			}
		}
		blink.pop();
	}
	
	cout << "no";
	return 0;
}