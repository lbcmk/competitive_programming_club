// https://dmoj.ca/problem/ccc09s3

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

vector<vector<int>> m(51, vector<int>(0));

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	m = {{}, {6}, {6}, {4,5,6,15}, {3,5,6}, {3,4,6}, {1,2,3,4,5,7}, {6,8}, {7,9}, {8,10,12}, {9,11}, {10,12}, {9,11,13}, {12,14,15}, {13}, {3,13}, {17,18}, {16,18}, {16, 17}};
	
	char n;
	int a, b;

	cin >> n;
	while(n != 'q') {
		queue<pair<int, int>> bl;
		vector<int> v(0), w(0);
		bool f = true;
		switch(n) {
			case 'i':
				cin >> a >> b;
				m[a].push_back(b);
				m[b].push_back(a);
				break;
			case 'd':
				cin >> a >> b;
				remove(m[a].begin(), m[a].end(), b);
				remove(m[b].begin(), m[b].end(), a);
				break;
			case 'n':
				cin >> a;
				cout << m[a].size() << endl;
				break;
			case 'f':
				cin >> a;
				v.push_back(a);
				for(int i : m[a]) {
					v.push_back(i);
				}

				for(int i : v) {
					for(int j : m[i]) {
						if(!count(w.begin(), w.end(), j) && !count(v.begin(), v.end(), j)) {
							w.push_back(j);
						}
					}
				}
				cout << w.size() << endl;
				break;
			case 's':
				cin >> a >> b;
				bl.push({a, 0});
				while(bl.size() > 0) {
					for(int i : m[bl.front().first]) {
						if(i == b) {
							f = false;
							cout << bl.front().second+1 << endl;
							break;
						}
						if(!count(v.begin(), v.end(), i)) {
							bl.push({i, bl.front().second+1});
							v.push_back(i);
						}
					}

					if(!f) break;

					bl.pop();
				}
				if(f) cout << "Not connected" << endl;
				break;
		}

		cin >> n;
	}
}