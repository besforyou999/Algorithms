main.out : main.o bubble_sort2.o
	gcc main.o bubble_sort2.o -o main.out
main.o : main.c bubble_sort2.h
	gcc -c main.c
bubble_sort2.o : bubble_sort2.c bubble_sort2.h
	gcc -c bubble_sort2.c
clean :
	rm -f *.o
