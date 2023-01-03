// https://dmoj.ca/problem/ccc18j2

#include <iostream>
using namespace std;

int main() {
	int n, c = 0;
	char a[100], b[100];

	cin >> n;

	cin >> a;
	cin >> b;

	for(int i = 0; i < n; i++) {
		if(a[i] == b[i] && a[i] == 'C') {
			c++;
		}
	}

	cout << c;
}