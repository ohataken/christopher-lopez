cl_termsize.o: cl_termsize.c
	cc -Wall -c cl_termsize.c

main.o: main.c
	cc -Wall -c main.c

christopher-lopez.o: cl_termsize.o main.o
	cc -o christopher-lopez cl_termsize.o main.o

run: christopher-lopez.o
	./christopher-lopez
