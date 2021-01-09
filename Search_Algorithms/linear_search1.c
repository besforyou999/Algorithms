
/*
   const int a[] : array that needs to be searched
   int n : length of array
   int key : number to search in the array
	
   if search is succeeded , returns the index number of the searched element
   if failed , returns -1

Complexity : O(n)
*/
int linear_search(const int a[], int n, int key) {

	for(int i=0; i < n ; i++ ) {
		if( a[i] == key )
			return i;
	}
	return -1;
}
