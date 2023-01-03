// https://dmoj.ca/problem/ccc17s2

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int n, a[100];

	cin >> n;
	
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a, a+n);

	for(int i = 0; i < n; i++) {
		if(i%2 == 0) {
			cout << a[(int)ceil((double)n/2)-(i/2)-1] << " ";
		} else {
			cout << a[(int)ceil((double)n/2)+(i/2)] << " ";
		}
	}	
}