// https://dmoj.ca/problem/ccc17s1

#include <iostream>
using namespace std;

int main() {
	long long n, a[100000] = {}, b[100000] = {}, c = 0;

	cin >> n;

	cin >> a[0];
	for(int i = 1; i < n; i++) {
		cin >> a[i];
		a[i] = a[i-1] + a[i];
	}

	cin >> b[0];
	for(int i = 1; i < n; i++) {
		cin >> b[i];
		b[i] = b[i-1] + b[i];
	}

	for(int i = 0; i < n; i++) {
		if(a[i] == b[i]) {
			c = i+1;
		}
	}

	cout << c;
}