// https://dmoj.ca/problem/bsspc22c1p1

#include <iostream>
using namespace std;

int main() {
	int n, a = 0, c;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> c;
		a += c;
		cout << a << endl;
	}	
}