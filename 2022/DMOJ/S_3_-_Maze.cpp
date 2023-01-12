// https://dmoj.ca/problem/ccc08s3

#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	int n, r, c;
	string g;

	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> r;
		cin >> c;
		vector<vector<int>> a(r*c, vector<int>(0));	
		bool z = true;
		
		for(int j = 0; j < r; j++) {
			cin >> g;
			for(int k = 0; k < c; k++) {
				int index = ((j*c) + k);

				if(g[k] == '*' && j == r-1 && k == c-1) {
					z = false;
				} else if(g[k] == '+') {
					if(j != 0)
						a[index].push_back((((j-1)*c) + k));
					if(j != r-1)
						a[index].push_back((((j+1)*c) + k));
					if(k != 0)
						a[index].push_back(((j*c) + k-1));
					if(k != c-1)
						a[index].push_back(((j*c) + k+1));
				} else if(g[k] == '|') {
					if(j != 0)
						a[index].push_back((((j-1)*c) + k));
					if(j != r-1)
						a[index].push_back((((j+1)*c) + k));
				} else if(g[k] == '-') {
					if(k != 0)
						a[index].push_back(((j*c) + k-1));
					if(k != c-1)
						a[index].push_back(((j*c) + k+1));
				}
			}
		}

		queue<pair<int, int>> blink;
		vector<int> v;
		bool f = true;

		if(r*c == 1 && z == true) {
			z = false;
			f = false;
			cout << '1' << endl;
		}

		blink.push({0, 1});
		if(z) {
			while(blink.size() > 0) {
				
				for(int i : a[blink.front().first]) {
					if(i == (c*r)-1) {
						f = false;
						cout << blink.front().second+1 << endl;
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
		}

		if(f) cout << "-1" << endl;
	}
}