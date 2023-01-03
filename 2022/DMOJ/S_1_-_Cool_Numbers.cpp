// https://dmoj.ca/problem/ccc09s1

#include <iostream>
using namespace std;

int main() {
	int d[22] = {0, 1, 64, 729, 4096, 15625, 46656, 117649, 262144, 531441, 1000000, 1771561, 2985984, 4826809, 7529536, 11390625, 16777216, 24137569, 34012224, 47045881, 64000000, 85766121};
	
	int a=0, b=0, c=0;
	
	for(int i = 0; i < 22; i++) {
		cin >> a;
		cin >> b;

		if(d[i] >= a && d[i] <= b) {
			c++;
		} else if (d[i] > b) {
			break;
		}
	}

	cout << c;
}