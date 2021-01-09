#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bubble_sort2.h"

int main()
{
	int i, nx;
	int *x;		//pointer to the first element of the array

	srand((unsigned int)time(NULL));

	printf("Bubble sort\n");
	printf("Number of elements : ");
	scanf("%d", &nx );

	x = calloc(nx, sizeof(int));

	for(i = 0; i < nx; i++) {
		x[i] = rand()%10000 + 1;
		printf("%d\n",x[i]);
	}

	bubble_sort2(x,nx);

	printf("Sorted in ascending order.\n");



	for(i = 0; i < nx; i++) {
		printf("%d\n",x[i]);
	}

	free(x);

	return 0;
}                                    
                                                           

