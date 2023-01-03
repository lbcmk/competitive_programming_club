// https://dmoj.ca/problem/ccc14s3

#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	int t, n;
	cin >> t;
	
	for(int i = 0; i < t; i++) {
		cin >> n;
		vector<int> a(n), d(n);

		int b=1, h=0;

		for(int j = 0; j < n; j++) {
			cin >> a[j];
		}

		for(int j = n-1; j >= 0; j--) {
			if(a[j] == b) {
				b++;
			} else if(d[h-1] == b) {
				b++;
				h--;
				j++;
			} else {
				d[h] = a[j];
				h++;
			}
		}

		for(int j = h-1; j >= 0; j--) {
			if(d[j] == b) {
				b++;
				h--;
			} else {
				break;
			}
		}

		if(b == n+1) 
			cout << "Y";
		else 
			cout << "N";
		cout << endl;
	}
}