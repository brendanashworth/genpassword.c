# Makefile for genpassword.c
# If you want to set your own compiler, export the $CC environment variable.
CC := gcc

test:
	$(CC) test/test1.c -o run

bench:
	$(CC) test/bench1.c -o bench

clean:
	-rm -f run
	-rm -f bench

.PHONY: clean test bench
