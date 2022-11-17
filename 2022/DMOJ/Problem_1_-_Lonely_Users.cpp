// https://dmoj.ca/problem/acc7p1

#include <iostream>
using namespace std;

int main() {
	int T, N;
	cin >> T;
	for(int i = 0; i < T; i++) {
		cin >> N;
		if(N == 2) {
			cout << N << endl;
		} else {
			cout << N-1 << endl;
		}
	}
}