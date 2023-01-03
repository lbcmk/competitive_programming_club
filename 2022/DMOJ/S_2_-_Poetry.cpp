// https://dmoj.ca/problem/ccc03s2

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n;
	string a, b, c, d;
	cin >> n;

	getline(cin, a);

	for(int i = 0; i < n; i++) {
		getline(cin, a);
		getline(cin, b);
		getline(cin, c);
		getline(cin, d);
		a = a.substr(a.find_last_of(' ')+1, a.size()-a.find_last_of(' ')-1);
		b = b.substr(b.find_last_of(' ')+1, b.size()-b.find_last_of(' ')-1);
		c = c.substr(c.find_last_of(' ')+1, c.size()-c.find_last_of(' ')-1);
		d = d.substr(d.find_last_of(' ')+1, d.size()-d.find_last_of(' ')-1);

		transform(a.begin(), a.end(), a.begin(), ::tolower);
		transform(b.begin(), b.end(), b.begin(), ::tolower);
		transform(c.begin(), c.end(), c.begin(), ::tolower);
		transform(d.begin(), d.end(), d.begin(), ::tolower);

		for(int i = a.size()-1; i >= 0; i--) {
			char e = a[i];
			if(e == 'a' || e == 'e' || e == 'i' || e == 'o' || e == 'u') {
				a = a.substr(i, a.size()-i);
				break;
			}
		}
		for(int i = b.size()-1; i >= 0; i--) {
			char e = b[i];
			if(e == 'a' || e == 'e' || e == 'i' || e == 'o' || e == 'u') {
				b = b.substr(i, b.size()-i);
				break;
			}
		}
		for(int i = c.size()-1; i >= 0; i--) {
			char e = c[i];
			if(e == 'a' || e == 'e' || e == 'i' || e == 'o' || e == 'u') {
				c = c.substr(i, c.size()-i);
				break;
			}
		}
		for(int i = d.size()-1; i >= 0; i--) {
			char e = d[i];
			if(e == 'a' || e == 'e' || e == 'i' || e == 'o' || e == 'u') {
				d = d.substr(i, d.size()-i);
				break;
			}
		}
		if(a == b && b == c && c == d) {
			cout << "perfect";
		} else if(a == d && b == c && a != b) {
			cout << "shell";
		} else if(a == b && c == d && a != c) {
			cout << "even";
		} else if(a == c && b == d && a != b) {
			cout << "cross";
		} else {
			cout << "free";
		}
		cout << endl;
	}
}