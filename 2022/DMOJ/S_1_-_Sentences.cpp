// https://dmoj.ca/problem/ccc97s1

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, m, o, p, e=0, f=0, g=0;
string a[25], b[25], c[25];

int main() {

	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> m;
		cin >> o;
		cin >> p;

		getline(cin, a[0]);

		for(int j = 0; j < m; j++) {
			getline(cin, a[j]);
		}

		for(int j = 0; j < o; j++) {
			getline(cin, b[j]);	
		}

		for(int j = 0; j < p; j++) {
			getline(cin, c[j]);
		}

		for(int e = 0; e < m; e++) {
			for(int f = 0; f < o; f++) {
				for(int g = 0; g < p; g++) {
					cout << a[e] << " " << b[f] << " " << c[g] << "." << endl;
				}
			}
		}
	}
}