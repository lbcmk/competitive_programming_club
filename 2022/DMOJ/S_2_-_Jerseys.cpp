// https://dmoj.ca/problem/ccc15s2

#include <iostream>
#include <vector>
using namespace std;

int main() {
	long long n, a, c, d=0;
	char e;
	cin >> n;
	cin >> a;

	vector<char> b(n);
	
	for(int i = 0; i < n; i++) {
		cin >> b[i];
	}

	for(int i = 0; i < a; i++) {
		cin >> e >> c;
		c -= 1;
		bool j = false;
		if(e == 'S' && (b[c] == 'L' || b[c] == 'M' || b[c] == 'S')) {
			j = true;
		} else if(e == 'M' && (b[c] == 'L' || b[c] == 'M')) {
			j = true;
		} else if(e == 'L' && b[c] == 'L') {
			j = true;
		}

		if(j) {
			d++;
			b[c] = '0';
		}
	}

	cout << d;
}