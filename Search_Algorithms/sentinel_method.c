/*
	int a[] : array to search
	int n : length of array to search
	int key : value to search in array
	
	return value : if search fails return -1, if search succeeds return the index of the searched number
*/
int sentinel_method(int a[], int n, int key) {

	int i=0;
	a[n] = key;

	while(1) {	
		
		if(a[i] == key)	break;
		
		i++;
	}

	return i == n ? -1 : i;
}
