// https://dmoj.ca/problem/wossoly22j1

#include <iostream>
using namespace std;

int main() {
	int n, a, b, c;
	cin >> n;
	cin >> a >> b >> c;

	if(a+(b*4)+(c*7) <= n) {
		cout << "Time to go shopping!";
	} else {
		cout << "You cannot afford them all.";
	}
}