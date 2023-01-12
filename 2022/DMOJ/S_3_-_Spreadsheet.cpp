// https://dmoj.ca/problem/ccc04s3

#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	vector<vector<int>> a(10, (vector<int>(9)));
	vector<vector<vector<pair<int, int>>>> e(10, (vector<vector<pair<int, int>>>(9, vector<pair<int, int>>(0))));
	string b;

	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 9; j++) {
			cin >> b;
			replace(b.begin(), b.end(), '+', ' ');
			if(isdigit(b[0])) {
				a[i][j] = stoi(b);
			} else {
				string d;
				stringstream c(b);
				a[i][j] = -1;
				while(c >> d) {
					e[i][j].push_back({(int)d[0]-(int)'A', (int)d[1]-(int)'1'});
				}
			}
		}
	}

	for(int k = 0; k < 200; k++) {
		for(int i = 0; i < 10; i++) {
			for(int j = 0; j < 9; j++) {
				int y = -1;
				for(int x = 0; x < e[i][j].size(); x++) {
					if(a[e[i][j][x].first][e[i][j][x].second] != -1) {
						if(y == -1) y++;
						y += a[e[i][j][x].first][e[i][j][x].second];
					} else {
						y = -1;
						break;
					}
				}
				if(y >= 0) {
					a[i][j] = y;
					e[i][j].clear();
				}
				cout << endl;
			}
		}
	}

	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 9; j++) {
			if(a[i][j] == -1)
				if(j != 8) {
					cout << "* ";
				} else {
					cout << "*";
				}
			else 
				cout << a[i][j] << ' ';
		}
		cout << endl;
	}
}