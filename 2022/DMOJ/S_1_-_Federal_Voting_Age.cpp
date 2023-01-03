// https://dmoj.ca/problem/ccc07s1

#include <iostream>
using namespace std;

int main() {
	int n, y, m, d;
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> y >> m >> d;
		if(y < 1989) {
			cout << "Yes" << endl;
		} else if(y == 1989 && m < 2) {
			cout << "Yes" << endl;
		} else if(y == 1989 && m == 2 && d <= 27) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}
}