main.out : main.o quick_sort.o
	gcc main.c quick_sort.c -o main.out
main.o : main.c quick_sort.h
	gcc -c main.c
quick_sort.o : quick_sort.c quick_sort.h
	gcc -c quick_sort.c
clean :
	rm -f *.o
