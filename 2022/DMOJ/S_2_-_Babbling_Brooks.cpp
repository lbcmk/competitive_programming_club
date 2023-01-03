// https://dmoj.ca/problem/ccc00s2

#include <iostream>
#include <cmath>
using namespace std;

float* insert(float arr[100], int n, int a, float p) {
	for(int i = a; i >= n; i--) {
		arr[i] = arr[i-1];
	}

	arr[n-1] *= (p/100);
	arr[n] *= ((100-p)/100);

	return arr;
}

float* remove(float arr[100], int n, int a) {

	arr[n-1] += arr[n];
	for(int i = n; i < a; i++) {
		arr[i] = arr[i+1];
	}
	return arr;
}

int main() {
	long long a, c, d;
	float b[101] = {}, e;

	cin >> a;
	for(int i = 0; i < a; i++) {
		cin >> b[i];
	}

	cin >> c;
	while(c != 77) {
		if(c == 99) {
			cin >> d;
			cin >> e;

			insert(b, d, a, e);
			a++;
		} else if (c == 88) {
			cin >> d;

			remove(b, d, a);
			a--;
		}

		cin >> c;
	}

	for(int i = 0; i < a; i++) {
		cout << round(b[i]) << " ";
	}
}
