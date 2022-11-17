// https://dmoj.ca/problem/ccc11s2
#include <iostream>
using namespace std;

int main() {
	int a, d = 0;
	char t, b[10000] = {0};
	cin >> a;

	for(int i = 0; i < a; i++) {
		cin >> b[i];
	}

	for(int i = 0; i < a; i++) {
		cin >> t;

		if(b[i] == t) {
			d++;
		}
	}
	cout << d;
}