#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	long long a, b, c, d, e;
	int f[100000] = {0};
	cin >> a;
	cin >> b;
	e = 0;

	for(int i = 0; i < a; i++) {
		cin >> c;
		cin >> d;
		
		e += c;
		f[i] = d - c;
	}
	sort(f, f+a);

	for(int i = 0; i < b; i++) {
		e += f[i];
	}

	cout << e << endl;
}