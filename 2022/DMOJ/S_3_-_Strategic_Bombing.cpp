// https://dmoj.ca/problem/ccc01s3

#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	string c;
	char a, b;
	map<char, vector<char>> d;
	cin >> c;
	while(c != "**") {
		a = c[0];
		b = c[1];

		d[a].push_back(b);
		cin >> c;
	}
}