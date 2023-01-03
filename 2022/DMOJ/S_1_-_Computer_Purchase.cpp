// https://dmoj.ca/problem/ccc10s1

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, S, R, D, h;
	string name;
	string best_name[2] = {"", ""};
	int best_val[2] = {0, 0};

	cin >> N;

	for(int i = 0; i < N; i++) {
		cin >> name >> R >> S >> D;
		h = (2*R) + (3*S) + D;

		if(h > best_val[0]) {
			best_val[1] = best_val[0];
			best_name[1] = best_name[0];
			best_val[0] = h;
			best_name[0] = name;
		} else if (h > best_val[1]) {
			best_val[1] = h;
			best_name[1] = name;
		} else if (h == best_val[1]) {
			if(name[0] < best_name[1][0]) {
				best_val[1] = h;
				best_name[1] = name;
			}
		}
	}

	if(best_val[0] != best_val[1]) {
		if(best_name[0] != "") {
			cout << best_name[0];
		}

		if(best_name[1] != "") {
			cout << endl << best_name[1];
		}
	} else {
		sort(best_name, best_name+2);

		cout << best_name[0] << endl << best_name[1];
	}
}