// https://cses.fi/problemset/task/2189

#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	int n, a[2], b[2], c[2];
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> a[0] >> a[1] >> b[0] >> b[1] >> c[0] >> c[1];
		double slope = (double)(b[1]-a[1])/(double)(b[0]-a[0]);

		double y = (double)a[1] + (double)(c[0]-a[0])*(slope);

		cout << c[0] << " " << y << endl;

		if(c[1] > y) cout << "LEFT" << endl;
		else if(c[1] < y) cout << "RIGHT" << endl;
		else if(c[1] == y) cout << "TOUCH" << endl;
	}
}