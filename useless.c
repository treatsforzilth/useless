#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int r = rand();
	int i = 0;

	while(i != r) {
		i++;
		r = rand();
		printf("i (%i) does not equal r (", i);
		printf("%i), repeating...\n", r);
	}

	printf("i (%i) equals r (", i);
	printf("%i), finished.\n", i);
}
