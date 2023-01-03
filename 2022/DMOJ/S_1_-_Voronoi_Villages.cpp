// https://dmoj.ca/problem/ccc18s1

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	double a[100] = {}, b[100] = {}, c=1000000000.0;

	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a, a+n);

	for(int i = 1; i < n-1; i++) {
		b[i] = ((a[i] - a[i-1])/2) + ((a[i+1] - a[i])/2);
		if(b[i] < c) {
			c = b[i];
		}
	}

	cout << fixed << showpoint;
	cout.precision(1);
	cout << c;
}
