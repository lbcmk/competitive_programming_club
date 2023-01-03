// https://dmoj.ca/problem/ccc06s2

#include <iostream>
using namespace std;

int main() {
	char letters[27] = {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.'};

	string a, b, c;
	int d;

	getline(cin, a);
	getline(cin, b);
	getline(cin, c);

	// cout << (int)'A';

	for(int i = 0; i < a.length(); i++) {
		d = (int)b[i] - 65;

		if(d < 0) { d = 26; }
		letters[d] = a[i];
	}

	for(int i = 0; i < c.length(); i++) {
		d = (int)c[i] - 65;

		if(d < 0) { d = 26; }

		cout << letters[d];
	}
}