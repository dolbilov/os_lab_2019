CC=gcc
CFLAGS=-I.

mainparalsum: sumutils.o parsum.o parallel_sum.o
	$(CC) -shared sumutils.o parsum.o parallel_sum.o -o libparalsum.so $(CFLAGS)
	$(CC) -L. -lparalsum -lpthread -o mainparalsum $(CFLAGS)

zombie : zombie.o
	$(CC) -o zombie zombie.o $(CFLAGS)

mainparalminmax: utils.o find_min_max.o parallel_min_max.o
	$(CC) -o mainparalminmax utils.o find_min_max.o parallel_min_max.o $(CFLAGS)

parallel_sum.o: parallel_sum.c
	$(CC) -fPIC -c parallel_sum.c $(CFLAGS)

parsum.o: parsum.c
	$(CC) -fPIC -c parsum.c $(CFLAGS)

sumutils.o: sumutils.c
	$(CC) -fPIC -c sumutils.c $(CFLAGS)

zombie.o : zombie.c
	$(CC) -c zombie.c $(CFLAGS)

utils.o: utils.c
	$(CC) -c utils.c $(CFLAGS)

find_min_max.o: find_min_max.c
	$(CC) -c find_min_max.c $(CFLAGS)

parallel_min_max.o: parallel_min_max.c
	$(CC) -c parallel_min_max.c $(CFLAGS)

clean:
	rm mainparalminmax zombie mainparalsum utils.o find_min_max.o parallel_min_max.o zombie.o sumutils.o parallel_sum.o parsum.o

