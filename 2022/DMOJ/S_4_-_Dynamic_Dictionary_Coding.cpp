// https://dmoj.ca/problem/ccc97s4

#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;

	unordered_map<string, int> a; 
	string b, d;
	vector<string> g;

	getline(cin, b, '\n');

	for(int i = 0; i < n; i++) {
		int j = 1;
		while (getline(cin, b, '\n')) {
			g.clear();
			if(b.size() < 1) {
				break;
			}
			stringstream bs(b);
			while (getline(bs, d, ' ')) {
				g.push_back("");
				g.insert(g.end(), d);
			}

			for(int k = 0; k < g.size(); k++) {
				if(g[k].size() > 0) {
					if(a.find(g[k]) != a.end()) {
						cout << a[g[k]];
					} else {
						cout << g[k];
						a[g[k]] = j;
						j++;
					}
					if(k != g.size()-1)
						cout << " ";
				}
			}
			cout << endl;
		}
		cout << endl;
		a.clear();
	}
}