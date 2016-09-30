.c.o:
	$(CC) -Wall -c $<

christopher-lopez.o: cl_termsize.o cl_termconf.o cl_termenv.o cl_termctrl.o cl_writer.o main.o
	$(CC) -o christopher-lopez $^

run: christopher-lopez.o
	./christopher-lopez
