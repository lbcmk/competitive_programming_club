// https://dmoj.ca/problem/ccc16s1

#include <iostream>
using namespace std;

int main() {
	string a, b;
	bool skip = false;
	int c = 0;

	cin >> a;
	cin >> b;

	for(int i = 0; i < b.length(); i++) {
		for(int j = 0; j < a.length(); j++) {
			if(b[i] == a[j]) {
				a[j] = ' ';
				skip = true;
				break;
			}
		}
		if(skip == true) {
			b[i] = ' ';
			skip = false;
		}
	}

	for(int j = 0; j < a.length(); j++) {
		if(a[j] != ' ') {
			c++;
		}
	}
	for(int j = 0; j < b.length(); j++) {
		if(b[j] == '*') {
			c--;
		}
	}

	if(c == 0) {
		cout << "A";
	} else {
		cout << "N";
	}
}