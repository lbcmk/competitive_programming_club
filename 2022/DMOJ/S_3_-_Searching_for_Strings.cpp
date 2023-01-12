// https://dmoj.ca/problem/ccc20s3

#include <bits/stdc++.h>
using namespace std;

int la[26] = {0}, lb[26] = {0}, pw[200010];

bool check() {
	for(int x = 0; x < 26; x++) {
		if(la[x] != lb[x]) return false;
	}
	return true;
}

int hashcas(int la[]) {
	int hash=0, p = 1;

	for(int x = 0; x < 26; x++) {
		hash = (int)(hash+la[x] * p) % (int)(1e9+7);
		p = (int)(p*31)%(int)(1e9+7);
	}

	return hash;
}

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	string a, b;
	set<string> e;
	int count = 0;

	cin >> a;
	cin >> b;

	pw[0] = 1;

	for(int i = 0; i < a.size(); i++) {
		la[a[i]-'a']++;
		lb[b[i]-'a']++;
		pw[i+1] = pw[i]*31;
	}

	int hash1 = hashcas(la);
	int hash2 = hashcas(lb);
	cout << hash1 << ' ' << hash2 << endl;

	if(hash2 == hash1) {
		if(e.find(b.substr(0, a.size())) == e.end()) {
			e.insert(b.substr(0, a.size()));
			count++;
		}
	}

	for(int i = a.size(); i < b.size(); i++) {
		// char te = b[i-a.size()];
		// hash2 -= (int)(((int)te - (int)'a') * pow(31, (int)te - (int)'a')) % (int)(1e9+7);
		// hash2 = (int)hash2 + (((int)b[i] - (int)'a') * ((long long)pow(31, (int)b[i] - (int)'a')) % (long long)(1e9+7));
		// cout << hash2 << endl;
		// if(hash2 == hash1) {
		// 	if(e.find(b.substr(i-a.size()+1, a.size())) == e.end()) {
		// 		e.insert(b.substr(i-a.size()+1, a.size()));
		// 		count++;
		// 	}
		// }
	}

	cout << count;	
}