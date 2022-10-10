#include <iostream>
using namespace std;

int main() {
	double a, b;
	cin >> a;
	cin >> b;

	a = a*a;
	b = b*b*3.14;

	if(a > b) {
		cout << "SQUARE";
	} else {
		cout << "CIRCLE";
	}	
}