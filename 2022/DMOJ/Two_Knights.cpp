// https://cses.fi/problemset/task/1072

#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	long long n, b, c;
	cin >> n;

	for(int w = 1; w <= n; w++) {
		b = 0;
		c = ((w*w));
		b += 4*((w*w)-3);
		b += 8*((w*w)-4);
		b += ((w-4)*4)*(c-5);
		b += (((w-4)*4)+4)*(c-5);
		b += ((w-4)*(w-4))*(c-9);
		b -= (w-4) * 8;
		b /= 2;
		cout << b << endl;
	}
}