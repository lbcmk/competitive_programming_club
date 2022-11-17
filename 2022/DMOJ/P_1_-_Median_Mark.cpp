// https://dmoj.ca/problem/dmopc14c1p1

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int a;
	int b[1000] = { 0 };
	cin >> a;


	for(int i = 0; i < a; i++) {
		cin >> b[i];
	}

	sort(b, b+a);

	if(a%2 == 1){
		cout << b[a/2];
	} else {
		cout << round((float)(b[a/2 - 1] + b[a/2]) / 2);
	}
}