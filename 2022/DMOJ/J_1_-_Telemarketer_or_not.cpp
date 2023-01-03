// https://dmoj.ca/problem/ccc18j1

#include <iostream>
using namespace std;

int main() {
	int a, c;
	cin >> a;
	if(a < 8) {
		cout << "answer";
		return 0;
	}

	cin >> c;
	cin >> a;

	if(a != c) {
		cout << "answer";
		return 0;
	}

	cin >> a;
	
	if(a < 8) {
		cout << "answer";
		return 0;
	}

	cout << "ignore";
}