// https://dmoj.ca/problem/ccc22s2

#include <iostream>
#include <map>
#include <vector>
using namespace std;

long long n, m, g, count;
map<string, vector<string>> a, b, c;
map<string, int> h, p;
string d, e, f;

int main() {
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> d >> e;
		a[d].push_back("");
		a[d][h[d]] = e;
		h[d]++;
	}

	cin >> m;

	for(int i = 0; i < m; i++) {
		cin >> d >> e;
		b[d].push_back("");
		b[d][p[d]] = e;
		p[d]++;
	}
	
	cin >> g;

	for(int i = 0; i < g; i++) {
		cin >> d >> e >> f;
		if(a.find(d) != a.end()) {
			for(int j = 0; j < h[d]; j++) {
				if(a[d][j] == e || a[d][j] == f) {
				} else {
					count++;
				}
			}
		}
		if(a.find(e) != a.end()) {
			for(int j = 0; j < h[e]; j++) {
				if(a[e][j] == d || a[e][j] == f) {
				} else {
					count++;
				}
			}
		}
		if(a.find(f) != a.end()) {
			for(int j = 0; j < h[f]; j++) {
				if(a[f][j] == e || a[f][j] == d) {
				} else {
					count++;
				}
			}
		}

		if(b.find(d) != b.end()) {
			for(int j = 0; j < p[d]; j++) {
				if(b[d][j] == e || b[d][j] == f) {
					count++;
				}
			}
		}
		if(b.find(e) != b.end()) {
			for(int j = 0; j < p[e]; j++) {
				if(b[e][j] == d || b[e][j] == f) {
					count++;
				}
			}
		}
		if(b.find(f) != b.end()) {
			for(int j = 0; j < p[f]; j++) {
				if(b[f][j] == e || b[f][j] == d) {
					count++;
				}
			}
		}
	}

	cout << count;
}