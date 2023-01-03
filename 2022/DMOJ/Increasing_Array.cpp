// https://cses.fi/problemset/task/1094

#include <iostream>
using namespace std;

int main() {
	int n; 
	long long a[200000] = {}, b = 0;

	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for(int i = 1; i < n; i++) {
		if(a[i] < a[i-1]) {
			b += a[i-1] - a[i];
			a[i] += a[i-1] - a[i];
		}
	}

	cout << b;
}