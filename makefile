CC=gcc
CFLAGS=-g

DEPS=bengas.h

OBJ=hello.o

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

hello: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^



