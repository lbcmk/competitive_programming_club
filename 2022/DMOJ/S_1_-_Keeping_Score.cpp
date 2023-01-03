// https://dmoj.ca/problem/ccc01s1

#include <iostream>
using namespace std;

int main() {
	string in;
	int points[4] = {0, 0, 0, 0}, val=0, id=0, tp=0;

	cin >> in;

	cout << "Cards Dealt Points";

	for(int i = 0; i < in.length(); i++) {
		
		
		if(in[i] == 'C') {
			// cout << " " << points[val];
			cout << endl << "Clubs";
			val = 0;
			id = 0;
		} else if(in[i] == 'D') {
			if(3 - id > 0) { points[val] += (3-id); }
			cout << " " << points[val];
			cout << endl << "Diamonds";
			val = 1;
			id = 0;
		} else if(in[i] == 'H') {
			if(3 - id > 0) { points[val] += (3-id); }
			cout << " " << points[val];
			cout << endl << "Hearts";
			val = 2;
			id = 0;
		} else if(in[i] == 'S') {
			if(3 - id > 0) { points[val] += (3-id); }
			cout << " " << points[val];
			cout << endl << "Spades";
			val = 3;
			id = 0;
		} else {
			cout << " " << in[i];
			if(in[i] == 'J') {
				points[val] += 1;
			} else if(in[i] == 'Q') {
				points[val] += 2;
			} else if(in[i] == 'K') {
				points[val] += 3;
			} else if(in[i] == 'A') {
				points[val] += 4;
			}
			id++;
		}
	}
	if(3 - id > 0) { points[val] += (3-id); }
	cout << " " << points[val];

	for(int i = 0; i < 4; i++) {
		tp += points[i];
	}

	cout << endl << "Total " << tp;

}