// https://dmoj.ca/problem/ccc12s2

#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
	int b[40] = {0}, c = 0;

	cin >> a;

	for(int i = 0; i < a.size(); i++) {
		switch((int)a[i]) {
			case 'I':
				b[i] = 1;
				break;
			case 'V':
				b[i] = 5;
				break;
			case 'X':
				b[i] = 10;
				break;
			case 'L':
				b[i] = 50;
				break;
			case 'C':
				b[i] = 100;
				break;
			case 'D':
				b[i] = 500;
				break;
			case 'M':
				b[i] = 1000;
				break;
			default:
				b[i] = a[i]-48;
				break;
		}
	}

	for(int i = 0; i < a.size()-2; i+=2) {
		if(b[i+1] < b[i+3]) {
			b[i] *= -1;
		}

		c += (b[i]*b[i+1]);
	}

	c += (b[a.size()-2]*b[a.size()-1]);
	cout << c << endl;
}