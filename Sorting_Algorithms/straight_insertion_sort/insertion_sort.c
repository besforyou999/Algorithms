#include "insertion_sort.h"

void insertion_sort(int a[], int n) {

	int i,j;

	for( i = 1; i < n ; i++ ) {

		int temp = a[i];
		
		for(j=i ; j > 0 && a[j-1] > temp ;j--) 
				a[j] = a[j-1];
		
		a[j] = temp;
	}

	return;
}
