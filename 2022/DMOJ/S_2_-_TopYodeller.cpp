// https://dmoj.ca/problem/ccc04s2

#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

long long n, m, a[101] = {0}, b, c[101], d[101], r[101], f, l;
unordered_map<long long, int[101]> e;
unordered_map<long long, int> g;

int main() {
	cin >> n >> m;

	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			if(g.find(a[j]) == g.end()) {
				g[a[j]] = 0;
			}
			cin >> b;
			a[j] += b;
			e[a[j]][g[a[j]]] = j+1;
			g[a[j]]++;
		}
		copy(begin(a), end(a), begin(c));
		sort(c, c+n, greater<int>());

		r[e[c[0]][g[c[0]]-1]] = 1;
		f = e[c[0]][g[c[0]]-1];

		if(d[f] < r[f]) {
			d[f] = r[f];
		}
		for(int j = 1; j < n; j++) {
			if(c[j] == c[j-1]) {
				r[e[c[j]][g[c[j]]-1]] = r[f];
			} else {
				r[e[c[j]][g[c[j]]-1]] = r[f]+1;
			}

			if(d[e[c[j]][g[c[j]]-1]] < r[e[c[j]][g[c[j]]-1]]) {
				d[e[c[j]][g[c[j]]-1]] = r[e[c[j]][g[c[j]]-1]];
			}
			f = e[c[j]][g[c[j]]-1];
			g[c[j]]--;
		}

		if(i < m-1) {
			e.clear();
			g.clear();
		}
	}

	for(int i = 0; i < n; i++) {
		if(d[i] == 0) {
			d[i] = 1;
		}
	}
	
	l = 0;
	while(c[l] == c[0]) {
		cout << "Yodeller " << e[c[0]][l] << " is the TopYodeller: score " << c[0] << ", worst rank " << d[e[c[0]][l]] << endl;
		l++;
	}
}