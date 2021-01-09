main.out : main.o insertion_sort.o
	gcc main.o insertion_sort.o -o main.out
main.o : main.c insertion_sort.h
	gcc -c main.c
insertion_sort.o : insertion_sort.c insertion_sort.h
	gcc -c insertion_sort.c
