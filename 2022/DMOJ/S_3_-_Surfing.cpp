// https://dmoj.ca/problem/ccc00s3

#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	string a, d;
	int x=0;
	string cl, ol;
	unordered_map<string, vector<string>> links;

	cin >> n;
	getline(cin, a, '\n');
	getline(cin, cl, '\n');

	while(x < n) {
		getline(cin, a, '\n');

		// regex r("<A HREF=\".+\">.*</A>");
		// regex r("<A HREF=\".*\">");
		regex r("<A HREF=\"([^>]+)[/]*\">");
		smatch m;

		int track = 0;

		if(a == "</HTML>") {
			x++;
			getline(cin, cl, '\n');
		}
		while(regex_search(a, m, r)) {
			regex link("\".*\"");
			smatch o;
			string pl = m[0].str();
			regex_search(pl, o, link);
			if(o.size() > 0){
				ol = o[0].str();
				ol = ol.substr(1,ol.length()-2);
				cout << "Link from " << cl << " to " << ol << endl;
				links[cl].push_back(ol);
			}
			string tmp = m.suffix().str();
			track += a.length() - tmp.length();
			a = tmp;
		}
	}

	getline(cin, d, '\n');
	while(cl != "The End" && d != "The End") {
		queue<string> blink;
		vector<string> v;
		bool f = true;

		blink.push(cl);

		while(blink.size() > 0) {
			for(string i : links[blink.front()]) {
				if(i == d) {
					f = false;
					break;
				}

				if(!count(v.begin(), v.end(), i)) {
					blink.push(i);
					v.push_back(i);
				}
			}
			blink.pop();
			if(!f) break;
		}

		if(f) cout << "Can't surf from " << cl << " to " << d << "." << endl;		
		else cout << "Can surf from " << cl << " to " << d << "." << endl;
		getline(cin, cl, '\n');
		getline(cin, d, '\n');
	}
}