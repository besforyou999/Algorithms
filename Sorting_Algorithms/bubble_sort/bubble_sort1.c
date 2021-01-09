
#define swap( x, y) do {\
	int temp;	\
	temp = x;	\
	x = y;		\
	y = temp;	\
}while(0)


void bubble(int a[], int n) {

	int i, j;
	for(i = 0; i < n - 1 ; i++ ) {
		for( j = n-1; j > i ; j-- ) {
			if( a[j] < a[j-1] )
				swap(a[j], a[j-1]);
		}
	}
}
