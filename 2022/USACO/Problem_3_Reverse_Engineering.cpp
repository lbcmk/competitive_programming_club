#include <iostream>
#include <map>
using namespace std;

int main() {
	int t, n, m, b;
	string a;
	map<int, int> x;
	bool d;

	cin >> t;

	for(int i = 0; i < t; i++) {
		cin >> n >> m;
		map<int, int> x;
		for(int k = 0; k < m; k++) {
			cin >> a >> b;
			d = true;
			for(int j = 0; j < n; j++) {
				if(x.count(j) == 0 && b == 0) {
					x[j] = (int)a[j] - 48 +(b*2);
				} else {
					cout << x[j];
					if((int)a[j] - 48 + (b*2) == x[j] || (int)a[j] - 49 + (b*2) == x[j]) {
						cout << "YES";
					}
					cout << endl;
				}
			}
			if(!d){
				break;
			}
		}

		if(d == false) {
			cout << "LIE" << endl;
		} else {
			cout << "OK" << endl;
		}
	}
}