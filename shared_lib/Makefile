CC = gcc
CFLAGS = -Wall -Werror -Wextra
LDFLAGS = -Wl,-rpath=`pwd`

all: main

main: main.c libupper.so liblower.so
	$(CC) -L. -o $@ $< -lupper -llower $(LDFLAGS)

libupper.so: upper.c
	$(CC) $(CFLAGS) -fpic -shared -o $@ $<

liblower.so: lower.c
	$(CC) $(CFLAGS) -fpic -shared -o $@ $<

clean:
	rm -f main *.so *.o

.PHONY: all clean

