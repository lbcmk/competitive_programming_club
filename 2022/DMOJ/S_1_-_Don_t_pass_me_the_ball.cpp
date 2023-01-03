// https://dmoj.ca/problem/ccc12s1

#include <iostream>
using namespace std;

int main() {
	int n, a=0, b=1, c=2;
	long long d = 0;

	cin >> n;

	if(n < 4) {
		cout << "0";
	} else if(n == 4) {
		cout << "1";
	} else {
		while(a < n - 3) {
			while(b < n - 2) {
				while(c < n - 1) {
					d++;
					c++;
				}
				b++;
				c = b+1;
			}
			a++;
			b = a+1;
			c = b+1;
		}
		cout << d;
	}

}