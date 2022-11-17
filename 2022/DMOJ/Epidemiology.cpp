// https://dmoj.ca/problem/ccc20j2

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int p, n, r;
	cin >> p;
	cin >> n;
	cin >> r;

	int infected = 0;

	for (int i = 0; infected <= p; i++) {
		infected = infected + (pow(r, i) * n);

		if (infected > p) {
			cout << i;
		}
	}
}