// https://dmoj.ca/problem/ccc05s1

#include <iostream>
using namespace std;

int main() {
	int n;
	string a, b;

	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> a;
		int j = -1;

		while(b.size() < 10) {
			if((int)a[j] >= 48 && (int)a[j] <= 58) {
				b += a[j];
			} else if((int)a[j] > 64 && (int)a[j] < 80) {
				b += (((int)a[j]-62)/3+1)+48;
			} else if((int)a[j] >= 80 && (int)a[j] < 91) {
				if((int)a[j] >= 80 && (int)a[j] <= 83) {
					b += '7';
				} else if((int)a[j] >= 84 && (int)a[j] <= 86) {
					b += '8';
				} else {
					b += '9';
				}
			}
			j++;
		}

		cout << b[0] << b[1] << b[2] << "-" << b[3] << b[4] << b[5] << "-" << b[6] << b[7] << b[8] << b[9];
		cout << endl;
		b = "";
	}
}