/*
   const int a[] : array to search
   int n		 : length of array to search
   int key 		 : number to search in array

   if search fails, return -1
   if search succeeds, returns the index of the found number

	Complexity : O(log n)
*/
int bin_search(const int a[], int n, int key) {

	int pl=0;		//first index of the search range
	int pr = n - 1; //last index of the search range
	int pc;			//center index of the search range( pc == (pl+pr)/2 )

	do {

		pc = ( pl + pr ) / 2;

		if( key == a[pc] ) {
			return pc;
		}
		else if( a[pc] < key ) {
			pl = pc + 1;			
		}
		else if ( key < a[pc] ) {
			pr = pc - 1;
		}

	}while(pl <= pr);

	return -1;
}
