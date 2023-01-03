// https://dmoj.ca/problem/ccc02s1

#include <iostream>
using namespace std;

long long t[4], n, count=0, mcount=1000000000000;

int main() {
	cin >> t[0];
	cin >> t[1];
	cin >> t[2];
	cin >> t[3];
	cin >> n;

	for(int i = 0; i < n/t[0]+1; i++) {
		for(int j = 0; j < n/t[1]+1; j++) {
			for(int k = 0; k < n/t[2]+1; k++) {
				for(int l = 0; l < n/t[3]+1; l++) {
					if((l*t[3])+(k*t[2])+(j*t[1])+(i*t[0]) == n) {
						cout << "# of PINK is " << i  << " # of GREEN is " << j << " # of RED is " << k << " # of ORANGE is " << l << endl;
						count++;
						if(i+j+k+l < mcount) {
							mcount = i+j+k+l;
						}
					}
				}
			}
		}
	}
	cout << "Total combinations is " << count << "." << endl << "Minimum number of tickets to print is " << mcount << ".";
}