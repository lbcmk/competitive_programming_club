// https://cses.fi/problemset/task/1617

#include <iostream>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	long long n;
	cin >> n;
	long long a = 1;

	for(int i = 0; i < n; i++) {
		a *= 2;
		a = a % 1000000007;
	}
	cout << a;
}