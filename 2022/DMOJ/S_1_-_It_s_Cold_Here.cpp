// https://dmoj.ca/problem/ccc08s1

#include <iostream>
using namespace std;

int main() {
	int a, b;
	string c, d;

	cin >> c >> a;

	while(c != "Waterloo") {
		if(a < b) {
			b = a;
			d = c;
		}

		cin >> c >> a;
	}

	cout << d;
}