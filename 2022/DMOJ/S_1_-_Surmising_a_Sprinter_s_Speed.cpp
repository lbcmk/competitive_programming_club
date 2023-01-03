// https://dmoj.ca/problem/ccc20s1

#include <iostream>
#include <map>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	long long n, b[100000];
	double c;
	map<long long, double> a;

	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> b[i] >> c;
		a[b[i]] = c;
	}

	sort(b, b+n);
	c = 0;

	for(int i = 1; i < n; i++) {
		if(abs((a[b[i]] - a[b[i-1]]) / (b[i]-b[i-1])) > c) {
			c = abs((a[b[i]] - a[b[i-1]]) / (b[i]-b[i-1]));
		}
	}
	cout << fixed << setprecision(1) << c;
}