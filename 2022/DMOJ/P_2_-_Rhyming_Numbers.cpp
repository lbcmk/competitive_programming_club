// https://dmoj.ca/problem/bsspc22c1p2

#include <iostream>
using namespace std;

int main() {
	int n, c, d;
	string a, b, r = "NO";

	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a >> b;
		c = a.length() - 1;
		d = b.length() - 1;

		if(c > 1 && d > 1) {
			if(a[a.length() - 1] == "7" && b[b.length() - 1] == "1" && b[b.length() - 2] == "1") {
				r = "YES";
			} else if (a[a.length() - 1] == "1" && a[a.length() - 2] == "1" && b[b.length() - 1] == "7") {
				r = "YES";
			}
		}
		cout << r << endl;
	}
}