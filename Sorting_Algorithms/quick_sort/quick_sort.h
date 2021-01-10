#ifndef _QUICK_SORT_H_
#define _QUICK_SORT_H_

#define swap(temp,x,y) do{ \
	temp t = x; \
	x = y;\
	y = t;\
} while(0)

void quick(int a[], int left, int right);

#endif
