// https://dmoj.ca/problem/ccc14s2

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	int n;
	string a[30], b[30];
	map<string, string> c;
	bool f = true;

	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for(int i = 0; i < n; i++) {
		cin >> b[i];
	}

	for(int i = 0; i < n; i++) {
		if(c.find(a[i]) == c.end() && a[i] != b[i]) {
			c[a[i]] = b[i];
			c[b[i]] = a[i];
		} else {
			if(c[a[i]] != b[i] && c[b[i]] != a[i] || a[i] == b[i]) {
				cout << "bad";
				f = false;
				break;
			}
		}
	}

	if(f) {
		cout << "good";
	}
}