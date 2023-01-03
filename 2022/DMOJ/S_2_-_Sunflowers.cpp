// https://dmoj.ca/problem/ccc18s2

#include <iostream>
using namespace std;

int main() {
	int n;
	int a[100][100];
	int b[4] = {0, 0, 0, 0};

	cin >> n;

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	
	if(a[0][0] < a[n-1][n-1]) {
		b[0] = a[0][0];
		b[3] = 1;
	} else {
		b[0] = a[n-1][n-1];
		b[3] = 4;
	}

	if(b[0] > a[0][n-1]) {
		b[0] = a[0][n-1];
		b[3] = 2;
	}

	if(b[0] > a[n-1][0]) {
		b[0] = a[n-1][0];
		b[3] = 3;
	}

	// cout << b[3] << endl;

	if(b[3] == 1) {
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
	} else if(b[3] == 2) {
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				cout << a[j][n-i-1] << " ";
			}
			cout << endl;
		}
	} else if(b[3] == 3) {
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				cout << a[n-j-1][i] << " ";
			}
			cout << endl;
		}
	} else if(b[3] == 4) {
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				cout << a[n-i-1][n-j-1] << " ";
			}
			cout << endl;
		}
	}
}
	