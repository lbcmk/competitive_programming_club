// https://dmoj.ca/problem/ccc21s1

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n; 
	long double a[10001], b;
	long double c = 0;
	cin >> n;

	for(int i = 0; i <= n; i++) {
		cin >> a[i];
	}

	for(int i = 0; i < n; i++) {
		cin >> b;
		c += b*(a[i]+a[i+1])/2;
	}
	cout << fixed << c;
}