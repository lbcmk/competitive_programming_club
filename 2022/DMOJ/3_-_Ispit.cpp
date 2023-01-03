// https://dmoj.ca/problem/coci18c5p3

#include <iostream>
#include <map>
#include <string>
using namespace std;

int n, k;
string a[500];
map<string, bool> b;
bool d = true;

int main() {
	cin >> n >> k;

	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for(int i = 0; i < n-1; i++) {
		for(int j = 0; j < n; j++) {
			cout << a[j].substr(i, k) << endl;
			if(b[a[j].substr(i, k)] == true) {
				cout << "bruh";
			}
			b[a[j].substr(i, k)] = true;
		}
	}

}