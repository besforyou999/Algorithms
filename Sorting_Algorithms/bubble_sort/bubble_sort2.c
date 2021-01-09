#define swap(x,y) do { \
	int temp;\
	temp = x;\
	x = y;\
	y = temp;\
}while(0);

void bubble_sort2( int a[], int n) {

	int k = 0;

	while( k < n -1 ) {
		int j;
		int last = n -1;
		for(j=n-1 ; j > k; j--)
			if(a[j-1] > a[j]) {
				swap(a[j-1],a[j]);
				last =j;
			}

		k = last;
	}

}
