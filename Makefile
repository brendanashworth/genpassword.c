# Makefile for genpassword.c
# If you want to set your own compiler, export the $CC environment variable.
CC := gcc

test:
	$(CC) test/test1.c -o run

clean:
	rm -f run

.PHONY: clean test
