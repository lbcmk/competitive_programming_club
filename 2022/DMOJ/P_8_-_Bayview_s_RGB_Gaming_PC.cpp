// https://dmoj.ca/problem/bsspc22c1p8

#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, a, b, k;
	string c, d, e, f;

	cin >> n;
	cin >> c;
	cin >> d;
	cin >> k;

	bool fdsa = false;

	for(int i = 0; i < n; i++) {
		if(c[i] == 'R' && d[i] == 'G') {
			f[i] = '1';
		} else if(c[i] == 'R' && d[i] == 'B') {
			f[i] = '2';
		} else if(c[i] == 'G' && d[i] == 'B') {
			f[i] = '1';
		} else if(c[i] == 'G' && d[i] == 'R') {
			f[i] = '2';
		} else if(c[i] == 'B' && d[i] == 'R') {
			f[i] = '1';
		} else if(c[i] == 'B' && d[i] == 'G') {
			f[i] = '2';
		}
	}

	for(int i = 0; i < k; i++) {
		cin >> a >> b;

		for(int j = a-1; j < b; j++) {
			e[j] = e[j] + 1 % 3;
		}

		for(int j = 0; j < n; j++) {
			if(e[j] != f[j]) {
				fdsa = false;
				break;
			} else {
				fdsa = true;
			}
		}
		
		if(fdsa == true) {
			cout << i+1;
			break;
		}
	}

	if(fdsa == false) {
		cout << "-1";
	}
}