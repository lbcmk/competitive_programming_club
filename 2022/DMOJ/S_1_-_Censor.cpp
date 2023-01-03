// https://dmoj.ca/problem/ccc98s1

#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	string a;
	cin >> n;

	while (getline(cin, a, '\n')) {
		int j = 0, p = 0;

		for(int i = 0; i < a.size(); i++) {
			if(a[i] != ' '){
				j++;
			} else {
				if(j == 4) {
					cout << "**** ";

				} else {
					for(int i = 0; i <= j; i++) {
						cout << a[i+p];
					}
				}
				p += j + 1;
				j = 0;
			}
		}

		if(j == 4) {
			cout << "****";
		} else {
			for(int i = p; i < p+j; i++) {
				cout << a[i];
			}
		}

		cout << endl;
	}
	

}