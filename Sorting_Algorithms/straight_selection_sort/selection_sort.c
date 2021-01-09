#define swap(x,y) do {\
	int temp;\
	temp = x;\
	x = y;\
	y = temp;\
}while(0);

/*
    int a[] : array to sort
	int n 	: length of array
*/
void selection_sort( int a[], int n) {

	int i,j;

	for( i = 0; i < n - 1; i++ ) {
		int min = i;
		for( j = i + 1; j < n ; j++ ) {
			if( a[min] > a[j] )
				min = j;
		}
		swap(a[i],a[min]);
	}
}



