// https://dmoj.ca/problem/ccc22s2

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int n, m, g;
pair<string, string> a[100001], b[100001];

int main() {
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> a[i].first >> a[i].second;
	}

	cin >> m;

	for(int i = 0; i < m; i++) {
		cin >> b[i].first >> b[i].second;
	}
	
	unordered_map<string, int> c;
	string d, e, f;
	cin >> g;

	for(int i = 0; i < g; i++) {
		cin >> d >> e >> f;
		c[d+" "+e] = 1;
		c[e+" "+f] = 1;
		c[f+" "+d] = 1;
	}

	int count=0;
	for(int i = 0; i < n; i++) {
		if(!c[a[i].first+" "+a[i].second] && !c[a[i].second+" "+a[i].first]){
			count++;
		}
	}
	
	for(int i = 0; i < m; i++) {
		if(c[b[i].first+" "+b[i].second] || c[b[i].second+" "+b[i].first]){
			count++;
		}
	}
	

	cout << count;
}