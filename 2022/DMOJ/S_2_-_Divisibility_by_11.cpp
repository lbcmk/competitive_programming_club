// https://dmoj.ca/problem/ccc96s2

#include <iostream>
using namespace std;

int n, b=0, d;
string a, c;
bool f;
int main() {
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> a;

		if(a.size() == 1) {
			cout << a << endl << "The number " << a << " is not divisible by 11." << endl;
		} else {
			c = a;
			d = a.size();
			while(d > 2) {
				for(int j = 0; j < d; j++) {
					cout << a[j];
				}

				a[d-2] -= a[d-1]-48;
				for(int j = d-2; j >= 0; j--) {
					if(a[j+1] < 48) {
						a[j] -= 1;
						a[j+1] += 10;
					}
				}	
				d--;
				cout << endl;

				if(d == 2 && a[0] == '0') {
					a[0] = a[1];
					d--;
				}

				f = false;

				for(int j = 0; j < d; j++) {
					// cout << endl << a[j];
					if(a[j] <= 48) {
						a[j] = a[j+1];
						a[j+1] = 0;
						f = true;
					} else {
						break;
					}
				}
				if(f) { d--; }
			}

			if(d >= 2) {
				b = (a[0]-48)*10 + (a[1]-48);
				cout << b << endl;
				if(b % 11 == 0) {
					cout << "The number " << c << " is divisible by 11." << endl;
				} else {
					cout << "The number " << c << " is not divisible by 11." << endl;
				}
			} else {
				b = (a[0]-48);
				cout << b << endl;
				cout << "The number " << c << " is not divisible by 11." << endl;
			}

			if(i < n-1) {
				cout << endl;
			}
		}
	}
}