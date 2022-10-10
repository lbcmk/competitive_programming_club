#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int T;
	cin >> T;

	double b, c;

	for(int i = 0; i < T; i++) {
		cin >> b;
		cin >> c;

		double d = ceil(b/c*100);

		if(d > 100) {
			cout << "sus" << endl;
		} else if (d == 100) {
			cout << "average" << endl;
		} else if (d <= 99 && d >= 98) {
			cout << "below average" << endl;
		} else if (d <= 97 && d >= 95) {
			cout << "can't eat dinner" << endl;
		} else if (d <= 94 && d >= 90) {
			cout << "don't come home" << endl;
		} else if (d <= 90) {
			cout << "find a new home" << endl;
		}
	}
}