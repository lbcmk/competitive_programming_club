// https://dmoj.ca/problem/wossoly22j3s1

#include <iostream>
#include <map>
using namespace std;

int main() {
	long long n;
	map<string, char> a;
	string c;

	cin >> n;

	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			cin >> a[{(char)(i+65), (char)(j+49)}];
		}
	}
	
	for(int i = 0; i < n; i++) {
		cin >> c;
		for(int j = 0; j < c.size(); j+=2) {
			if(a.find({c[j], c[j+1]}) == a.end()) {
				cout << c[j];
				j--;
			} else {
				cout << a[{c[j], c[j+1]}];
			}
		}
		cout << endl;
	}
}