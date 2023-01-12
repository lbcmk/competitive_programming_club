// https://dmoj.ca/problem/ccc13s3

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;	
	cin >> n >> m;

	vector<int> te(5);
	vector<vector<bool>> pl(5, vector<bool>(5));

	for(int i = 0; i < m; i++) {
		int a, b, sa, sb;
		cin >> a >> b >> sa >> sb;
		if(sa > sb) {
			te[a] += 3;
		} else if(sb > sa) {
			te[b] += 3;
		} else {
			te[a] += 1;
			te[b] += 1;
		}
		pl[min(a, b)][max(a, b)-min(a, b)] = true;
	}

	vector<pair<int, int>> le;

	for(int i = 1; i < 5; i++) {
		for(int j = i; j < 4; j++) {
			if(pl[i][j-i+1] == 0) {
				le.push_back({i, j+1});
			}
		}
	}

	int bl[6] = {0, 0, 0, 0, 0, 0};

	int score = 0;

	while(bl[6-le.size()] != 3) {
		for(int i = 0; i < 5; i++) {
			if(bl[i+1] == 3) {
				bl[i]++;
				bl[i+1] = 0;
			}
		}

		bool f = true, g = true;
		for(int i = le.size(); i < 6; i++) {
			cout << bl[i] << ' ';
			if(bl[i] == 3)
				f = !f;
		}
		cout << endl;

		if(f) {
			vector<int> lac = te;
			for(int i = 0; i <= le.size(); i++) {
				cout << i << ' ';
				cout << lac[le[i].first] << ' ' << lac[le[i].second] << "  ";
				if(bl[i] == 0) {
					lac[le[i].second] += 3;
				} else if(bl[i] == 1) {
					lac[le[i].first] += 3;
				} else if(bl[i] == 2) {
					lac[le[i].first]++;
					lac[le[i].second]++;
				}
				cout << lac[le[i].first] << ' ' << lac[le[i].second] << endl;
			}

			for(int i = 1; i < 5; i++) {
				// cout << lac[i] << ' ';
				if(lac[i] > lac[n]) {
					g = false;
				}
			}

			if(g) score++;
		}


		bl[5]++;
	}	

	cout << score;
}