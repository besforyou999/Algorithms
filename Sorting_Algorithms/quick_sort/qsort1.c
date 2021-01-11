#include <stdio.h>
#include <stdlib.h>

int int_cmp (const int *a, const int *b) {

	if(*a < *b)
		return -1;
	else if(*a > *b)
		return 1;
	else
		return 0;
}

int main() {
	
	int i, nx;
	int *x;		//pointer for the first element of the array
	printf("Qsort sorting\n");
	printf("Number of elements : ");
	scanf("%d", &nx);

	x = calloc(nx, sizeof(int));

	for(i=0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i] );
	}

	qsort(x,											//array
		  nx,											//element number
		  sizeof(int),									//element size
		  (int(*)(const void *, const void *))int_cmp	//compare function
		 );

	puts("Sorted in ascending order. ");

	for(i=0; i < nx; i++)
		printf("x[%d] = %d\n", i ,x[i]);
	free(x);

	return 0;
}


