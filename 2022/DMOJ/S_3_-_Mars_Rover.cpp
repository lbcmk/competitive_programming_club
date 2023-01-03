// https://dmoj.ca/problem/ccc98s3

#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	int n, a;
	cin >> n;
	int d[2] = {0, 0}, dir = 2;

	for(int i = 0; i < n; i++) {
		cin >> a;
		while(a != 0) {
			if(a == 1) {
				cin >> a;
				if(dir%2 == 0) {
					d[1] += a*(dir-1);
				} else {
					d[0] += a*(dir-2);
				}
			} else if (a == 2) {
				dir = (dir+1)%4;
			} else if (a == 3) {
				dir = (dir+3)%4;
			}
			cin >> a;
		}
		cout << "Distance is " << abs(d[0])+abs(d[1]) << endl;

		if(d[0] > 0 && d[1] > 0) {
			d[0] = abs(d[0]);
			d[1] = abs(d[1]);
			switch(dir) {
				case 2:
					cout << "3\n1\n" << d[0] << "\n3\n1\n" << d[1] << endl;
					break; 
				case 3:
					cout << "2\n1\n" << d[0] << "\n2\n1\n" << d[1] << endl;
					break; 
				case 0:
					cout << "1\n" << d[1] << "\n2\n1\n" << d[0] << endl;
					break; 
				case 1:
					cout << "1\n" << d[0] << "\n3\n1\n" << d[1] << endl;
					break; 
			}
		} else if(d[0] < 0 && d[1] > 0) {
			d[0] = abs(d[0]);
			d[1] = abs(d[1]);
			switch(dir) {
				case 2:
					cout << "2\n1\n" << d[0] << "\n2\n1\n" << d[1] << endl;
					break; 
				case 1:
					cout << "3\n1\n" << d[1] << "\n3\n1\n" << d[0] << endl;
					break; 
				case 0:
					cout << "1\n" << d[1] << "\n3\n1\n" << d[0] << endl;
					break; 
				case 3:
					cout << "1\n" << d[0] << "\n2\n1\n" << d[1] << endl;
					break; 
			}
		} else if(d[0] > 0 && d[1] < 0) {
			d[0] = abs(d[0]);
			d[1] = abs(d[1]);
			switch(dir) {
				case 0:
					cout << "2\n1\n" << d[0] << "\n2\n1\n" << d[1] << endl;
					break; 
				case 3:
					cout << "3\n1\n" << d[1] << "\n3\n1\n" << d[0] << endl;
					break; 
				case 2:
					cout << "1\n" << d[1] << "\n3\n1\n" << d[0] << endl;
					break; 
				case 1:
					cout << "1\n" << d[0] << "\n2\n1\n" << d[1] << endl;
					break; 
			}
		} else if(d[0] < 0 && d[1] < 0) {
			d[0] = abs(d[0]);
			d[1] = abs(d[1]);
			switch(dir) {
				case 0:
					cout << "3\n1\n" << d[0] << "\n3\n1\n" << d[1] << endl;
					break; 
				case 3:
					cout << "1\n" << d[0] << "\n3\n1\n" << d[1] << endl;
					break; 
				case 2:
					cout << "1\n" << d[1] << "\n2\n1\n" << d[0] << endl;
					break; 
				case 1:
					cout << "2\n1\n" << d[1] << "\n2\n1\n" << d[0] << endl;
					break; 
			}
		} 
		else if(d[0] == 0 && d[1] < 0) {
			d[1] = abs(d[1]);
			switch(dir) {
				case 2:
					cout << "1\n" << d[1] << endl;
					break; 
				case 3:
					cout << "3\n1\n" << d[1] << endl;
					break; 
				case 0:
					cout << "3\n3\n1\n" << d[1] << endl;
					break; 
				case 1:
					cout << "2\n1\n" << d[1] << endl;
					break; 
			}
		} else if(d[0] == 0 && d[1] > 0) {
			d[1] = abs(d[1]);
			switch(dir) {
				case 0:
					cout << "1\n" << d[1] << endl;
					break; 
				case 3:
					cout << "2\n1\n" << d[1] << endl;
					break; 
				case 2:
					cout << "3\n3\n1\n" << d[1] << endl;
					break; 
				case 1:
					cout << "3\n1\n" << d[1] << endl;
					break; 
			}
		} else if(d[0] < 0 && d[1] == 0) {
			d[0] = abs(d[0]);
			switch(dir) {
				case 3:
					cout << "1\n" << d[0] << endl;
					break; 
				case 0:
					cout << "3\n1\n" << d[0] << endl;
					break; 
				case 1:
					cout << "3\n3\n1\n" << d[0] << endl;
					break; 
				case 2:
					cout << "2\n1\n" << d[0] << endl;
					break; 
			}
		} else if(d[0] > 0 && d[1] == 0) {
			d[0] = abs(d[0]);
			switch(dir) {
				case 3:
					cout << "1\n" << d[0] << endl;
					break; 
				case 0:
					cout << "2\n1\n" << d[0] << endl;
					break; 
				case 1:
					cout << "3\n3\n1\n" << d[0] << endl;
					break; 
				case 2:
					cout << "3\n1\n" << d[0] << endl;
					break; 
			}
		}

		dir = 2;
		d[0] = 0;
		d[1] = 0;

		if(i != n-1) cout << endl;
	}
}