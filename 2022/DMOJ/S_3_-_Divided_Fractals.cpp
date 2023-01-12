// https://dmoj.ca/problem/ccc99s3

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

vector<string> generate(int n) {
	vector<string> a(27);
	if(n == 0) 
		for(int i = 0; i < 27; i++) 
			a[i] = "***************************";

	else {
		for(int i = 0; i < 27; i++) {
			if(i <= 9 || i>= 18) {
				a[i] = "***************************";
			} else {
				a[i] = "*********         *********";
			}
		}

		vector<string> b(27);

		for(int k = 0; k < n; k++) {
			for(int i = 0; i < 9; i++) {
				b[i] = "*********";
				for(int j = 0; j < 9; j++) {
					b[i][j] = a[i*3][j*3];
				}
			}
			for(int i = 0; i < 9; i++) {
				a[i] = b[i] + b[i] + b[i];
				a[i+9] = b[i] + "         " + b[i];
				a[i+18] = b[i] + b[i] + b[i];
			}
		}
	}

	return a;
}

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	int d, n, b, t, l, r;
	cin >> d;
	for(int i = 0; i < d; i++) {
		cin >> n >> b >> t >> l >> r;
		vector<string> a(27);
		a = generate(3);
		for(int j = 0; j < 27; j++) {
			cout << a[j] << endl;
		}
	}	
}