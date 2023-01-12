// https://dmoj.ca/problem/ccc16s3

#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	vector<int> a(m), b;
	map<int, vector<int>> fr;


	for(int i = 0; i < m; i++) {
		cin >> a[i];
	}

	int c, d;
	for(int i = 0; i < n; i++) {
		cin >> c >> d;
		fr[c].push_back(d);
		fr[d].push_back(c);
	}

	int ans = 10000000;
	for(int j = 0; j < m; j++) {
		copy(a.begin(), a.end(), back_inserter(b));
		queue<pair<int, int>> blink;
		vector<int> v;
		bool f = true;

		blink.push({b[j], 0});
		b.erase(remove(b.begin(), b.end(), b[j]), b.end());

		while(b.size() > 0) {
			for(int i : fr[blink.front().first]) {
				if(count(b.begin(), b.end(), i)) {
					b.erase(remove(b.begin(), b.end(), i), b.end());
					int temp = blink.front().second+1;
					queue<pair<int, int>> empty;
					swap(blink, empty);
					blink.push({i, temp});
				} else if(!count(v.begin(), v.end(), i)) {
					blink.push({i, blink.front().second+1});
					v.push_back(i);
				}


				if(b.size() == 0) {
					f = false;
					ans = min(ans, blink.front().second);
					break;
				}

			}
					
			if(blink.size() == 1) {
				v.clear();
			}
			for(int i : fr[blink.front().first]) 
				blink.push({i, blink.front().second+1});
				

			blink.pop();
			
			if(!f) break;
		}


		b.clear();
	}
	cout << ans;
}