// https://dmoj.ca/problem/wossoly22j4

#include <iostream>
#include <vector>
using namespace std;

int main() {
	long long n, m, q, a, b, e=300000;
	cin >> n >> m;

	vector<long long> p(m+2), d(m+2);

	for(int i = 0; i < m; i++) {
		cin >> p[i] >> d[i];
	}

	p[m] = 1;
	p[m+1] = n;
	d[m] = n;
	d[m+1] = n;

	cin >> q;

	for(int z = 0; z < q; z++) {
		cin >> a >> b;

		vector<int> c;
		for(int i = 0; i < m+2; i++) {
			if(p[i] + d[i]+1 >= b && p[i] - (d[i]+1) <= b) {
				c.insert(c.end(), p[i]);
				if(e > c[c.size()-1] && b-c[c.size()-1] <= e-b) {
					e = c[c.size()-1];
				}
			}
		}

		if(a-1) {
			cout << c.size()-1 << endl;
		} else {
			cout << e << endl;
		}
	}
}