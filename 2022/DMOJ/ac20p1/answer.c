#include <stdio.h>

int main() {
	int a;
    long long int x,y,z,longest;

	scanf("%i", &a);

	for(int i = 0; i < a; i++) {
		scanf("%lli %lli %lli", &x, &y, &z); //reads the user's inputs

		longest = z;
		if (longest < x) {
			z = longest;
			longest = x;
			x = z;
		}
		if (longest < y) {
			z = longest;
			longest = y;
			y = z;
		}

		if( x * x + y * y == longest * longest ) {
			printf("R\n");
		} else if( x * x + y * y > longest * longest) {
			printf("A\n");
		} else printf("O\n");
	}
  return 0;
}