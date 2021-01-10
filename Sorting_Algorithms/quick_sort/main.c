#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "quick_sort.h"

int main()
{
	int i, nx;
	int *x;		//pointer to the first element of the array

	srand((unsigned int)time(NULL));

	printf("Quick sort\n");
	printf("Number of elements : ");
	scanf("%d", &nx );

	x = calloc(nx, sizeof(int));

	for(i = 0; i < nx; i++) {
		x[i] = rand()%10000 + 1;
		printf("%d\n",x[i]);
	}

	quick(x,0,nx-1);

	printf("Sorted in ascending order.\n");



	for(i = 0; i < nx; i++) {
		printf("%d\n",x[i]);
	}

	free(x);

	return 0;
}                                    
                                                           

