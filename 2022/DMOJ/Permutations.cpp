// https://cses.fi/problemset/task/1070

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	if(n < 4 && n > 1) {
		cout << "NO SOLUTION";
	} else if(n == 1) {
		cout << "1";
	} else if(n == 4) {
		cout << "2 4 1 3";
	}	
	else {
		for(int i = 0; i < ceil((float)n/2); i++) {
			cout << n-(i*2) << " ";
		}
		for(int i = 0; i < floor((float)n/2); i++) {
			cout << n-(i*2)-1 << " ";
		}
	}
}