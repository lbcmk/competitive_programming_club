// https://dmoj.ca/problem/coci09c7p1

#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	if(b < 45) {
		a -= 1;
	}

	if(a < 0) {
		a = 24 + a;
	}

	b = (b + 15)%60;

	cout << a << " " << b;
}