// https://dmoj.ca/problem/ccc99s1

#include <iostream>
using namespace std;

string n;
int a[3] = {-10, 0, -10}, s[2] = {0, 0};

int main() {

	for(int i = 0; i < 52; i++) {
		cin >> n;

		if(n == "ace") {
			a[0] = 4;
			a[1] = 0;
			a[2] = i%2;
		} else if(n == "king") {
			a[0] = 3;
			a[1] = 0;
			a[2] = i%2;
		} else if(n == "queen") {
			a[0] = 2;
			a[1] = 0;
			a[2] = i%2;
		} else if(n == "jack") {
			a[0] = 1;
			a[1] = 0;
			a[2] = i%2;
		} else {
			a[1]++;
		}
		if(a[1] - a[0] == 0) {
			s[a[2]]+=a[0];
			cout << "Player " << (char)(a[2]+65) << " scores " << a[0] << " point(s)." << endl;
		}
	}

	cout << "Player A: " << s[0] << " point(s)." << endl << "Player B: " << s[1] << " point(s)."; 
}