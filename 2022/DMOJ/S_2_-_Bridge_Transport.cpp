// https://dmoj.ca/problem/ccc13s2

#include <iostream>
using namespace std;

int main() {
	int m, n, a[100000] = {0, 0, 0, 0}, b=0, c=0;

	cin >> m;
	cin >> n;

	for(int i = 4; i < n+4; i++) {
		cin >> a[i];
		
		b -= a[i-4] - a[i];
		if(b <= m) {
			c++;
		} else {
			break;
		}
	}

	cout << c;
}