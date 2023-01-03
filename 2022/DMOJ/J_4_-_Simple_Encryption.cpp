// https://dmoj.ca/problem/ccc04j4

#include <iostream>
using namespace std;

int main() {
	string a, b, temp;
	int c;

	getline(cin, a);
	getline(cin, b);

	for (int i = 0; i < b.size(); ++i) 
    {
        if ((b[i] >= 'A' && b[i] <= 'Z'))
        {
            temp += b[i];
        }
    }
    b = temp;

	for(int i = 0; i < b.length(); i++) {
		c = b[i] + a[i%a.length()] - 65;
		if(c > 90) {
			c = 64+(c%90);
		}
		cout << (char)c;
	}
}