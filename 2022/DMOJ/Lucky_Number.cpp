// https://dmoj.ca/problem/hkccc08j2

#include <iostream>
using namespace std;

int main() {
	int a, c, d;
	cin >> a;
	string b;

	for(int i = 0; i < a; i++) {
		cin >> b;
		c = 0;

		for(int j = 0; j < (int)b.length(); j++) {
			c += (int)b[j] - 48;
		}
		while(c > 9) {
			d = c;
			c = 0;
			while(d != 0) {
				c += d%10;
				d = d/10;
			}
		}
		cout << c << endl;
	}
}