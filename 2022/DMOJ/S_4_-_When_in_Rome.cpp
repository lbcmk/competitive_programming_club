// https://dmoj.ca/problem/ccc96s4

#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	string a;
	int n, d, g, h, l;
	vector<int> b, c;
	bool f = false;

	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> a;
		f = false;

		b.clear();
		c.clear();
		g = 0;
		h = 0;

		for(int j = 0; j < a.size(); j++) {
			cout << a[j];
			d = 0;
			switch(a[j]){
				case 'I':
					d = 1;
					if(a[j-1] != 'I' && (a[j+1] == 'X' || a[j+1] == 'V')) d = -1;
					break;
				case 'V':
					d = 5;
					break;
				case 'X':
					d = 10;
					if(a[j-1] != 'X' && (a[j+1] == 'L' || a[j+1] == 'C')) d = -10;
					break;
				case 'L':
					d = 50;
					break;
				case 'C':
					d = 100;
					if(a[j-1] != 'C' && (a[j+1] == 'D' || a[j+1] == 'M')) d = -100;
					break;
				case 'D':
					d = 500;
					break;
				case 'M':
					d = 1000;
					break;
				case '+':
					f = true;
					break;
			}
			// cout << d << " ";
			if(d != 0) {
				if(f) {
					c.push_back(d);
				} else {
					b.push_back(d);
				}
			}
		}
	
		for(int j = 0; j < b.size(); j++) {
			g += b[j];
		}
		for(int j = 0; j < c.size(); j++) {
			h += c[j];
		}
		l = g + h;

		if(l > 1000) cout << "CONCORDIA CUM VERITATE";
		else {
			int m = floor(l/1000);
			l -= m*1000;
			cout << string(m, 'M');
			m = floor(l/900);
			l -= m*900;
			if(m == 1) cout << "CM";
			m = floor(l/500);
			l -= m*500;
			cout << string(m, 'D');
			m = floor(l/400);
			l -= m*400;
			if(m == 1) cout << "CD";
			m = floor(l/100);
			l -= m*100;
			cout << string(m, 'C');
			m = floor(l/90);
			l -= m*90;
			if(m == 1) cout << "XC";
			m = floor(l/50);
			l -= m*50;
			cout << string(m, 'L');
			m = floor(l/40);
			l -= m*40;
			if(m == 1) cout << "XL";
			m = floor(l/10);
			l -= m*10;
			cout << string(m, 'X');
			m = floor(l/9);
			l -= m*9;
			if(m == 1) cout << "IX";
			m = floor(l/5);
			l -= m*5;
			cout << string(m, 'V');
			m = floor(l/4);
			l -= m*4;
			if(m == 1) cout << "IV";
			m = floor(l);
			l -= m;
			cout << string(m, 'I');
		}

		cout << endl;
	}
}