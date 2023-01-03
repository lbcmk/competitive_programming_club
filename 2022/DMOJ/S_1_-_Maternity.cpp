// https://dmoj.ca/problem/ccc06s1

#include <iostream>
using namespace std;

int main() {
	string a, b, c = "", d;
	int n;
	bool f = true;
	cin >> a;
	cin >> b;
	cin >> n;

	for(int i = 0; i < 10; i+=2) {
		if((int)a[i] + (int)a[i+1] < 144) {
			c += a[i];
		} else if((int)b[i] + (int)b[i+1] < 144) {
			c += b[i];
		} else if((int)a[i] + (int)a[i+1] > 192 && (int)b[i] + (int)b[i+1] > 192) {
			c += (i/2)+97;
		} else {
			c += '*';
		}
	}


	for(int i = 0; i < n; i++) {
		cin >> d;
		for(int j = 0; j < 5; j++) {
			if(c[j] == '*') {
				continue;
			} else if(d[j] != c[j]) {
				cout << "Not their baby!";
				f = false;
				break;
			}
		}

		if(f == true) {
			cout << "Possible baby.";
		}

		f = true;
		cout << endl;
	}
}