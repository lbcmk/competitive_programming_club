// https://dmoj.ca/problem/ccc14s1

#include <iostream>
using namespace std;

int main() {
	long long k, n, a, b[100] = { 0 };
	cin >> k;
	cin >> n;

	for(int i = 0; i < k; i++) {
		b[i] = i+1;
	}

	for(int i = 0; i < n; i++) {
		cin >> a;

		for(int j = a-1; j < k; j+=a) {
			b[j] = 0;
		}

		for(int j = 0; j < k; j++) {
			if(b[j] == 0) {
				for(int l = j; l < k; l++) {
					b[l] = b[l+1];
				}
			}
		}	
	}
	
	for(int i = 0; i < k; i++) {
		if(b[i] <= 0 || b[i] > 100) {
			break;
		}
		cout << b[i] << endl;
	}
}