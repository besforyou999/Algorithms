#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "insertion_sort.h"


int main() {

	int n , *x;

	srand((unsigned int)time(NULL));

	printf("Insertion sort\n");
	printf("Length : ");
	scanf("%d",&n);

	x = calloc( n, sizeof(int) );

	for(int i = 0; i < n ; i++) {
		x[i] = rand() % 10000 + 1;
		printf("%d\n", x[i]);

	}

	insertion_sort(x,n);

	printf("Sorting complete\n");

	for(int i=0; i < n ; i++ ) {
		printf("%d\n",x[i]);
	}
	
	return 1;
}
	


