// https://dmoj.ca/problem/wossoly22s2

#include <iostream>
using namespace std;

int main() {
	long long n, a;
	cin >> n;

	a = n;

	for(int i = 0; i < n; i++) {
		cout << a << " ";
		a--;
	}

	cout << endl;

	if(n > 3) {
		// cout << endl << n-2 << " " << n << " 1 " << n-1 << " ";
		// a = n-2;
		for(int i = 0; i <= n/2; i++) {
			cout << n-2-i << " " << n-i << " ";
			// 	cout << n-2-i << " ";
			// }
			// a--;
		}
	} else {
		cout << "1 ";
		a = n;
		for(int i = 1; i < n; i++) {
			cout << a << " ";
			a--;
		}
	}

}