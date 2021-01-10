#include "quick_sort.h"


void quick(int a[], int left, int right) {

	int pl = left;
	int pr = right;
	int x = a[(pl+pr) / 2];

	do {
		while( a[pl] < x ) pl++;
		while( a[pr] > x ) pr--;
		if( pl <= pr ) {
			swap(int,a[pl],a[pr]);
			pl++;
			pr--;
		}
	}while(pl <= pr);

	if(pl < right) quick(a,pl,right);
	if(left < pr) quick(a,left, pr);
	
	return;
}
