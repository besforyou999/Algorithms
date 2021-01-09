#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "selection_sort.h"

int main() {

	int i, nx;
	int *x;
	srand( (unsigned int)time(NULL) );

	puts("Straight selection sort.");

	printf("Number of elements : ");
	scanf("%d", &nx);
	x = calloc( nx, sizeof(int) );

	for(i = 0 ; i < nx; i++) {
		x[i] = rand()% 30000 + 1;
		printf("%d\n",x[i]);
	}

	selection_sort(x,nx);

	puts("Sort completed");

	for(i = 0 ; i < nx; i++) {
		printf("%d\n",x[i]);
	}

	free(x);
	return 1;
}
