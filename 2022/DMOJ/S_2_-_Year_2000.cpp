// https://dmoj.ca/problem/ccc99s2

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string a, d;
	vector<string> g;

	cin >> n;
	getline(cin, a, '\n');
	
	for(int i = 0; i < n; i++) {
		getline(cin, a, '\n');

		stringstream bs(a);
		while (getline(bs, d, ' ')) {
			// g.push_back("");
			// g.insert(g.end(), d);
			regex r("[^0-9A-Za-z][0-9][0-9][/.][0-9][0-9][/.][0-9][0-9].*");
			smatch m;

			regex_search(d, m, r);


			if(m.size() == 1) {
				string e = m[0].str();
				// cout << e.size() << ' ';
				if(e.size() == 8) {
					cout << "!!" << e << "!!" << " ";
				} else {
					cout << d << " ";
				}
			} else {
				cout << d << " ";
			}

			sregex_iterator iter(a.begin(), a.end(), r);
			sregex_iterator end;
		}
		cout << endl;

	}
}