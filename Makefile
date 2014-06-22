# Makefile for genpassword.c
test:
	gcc test/test1.c -o run

clean:
	rm -f run

.PHONY: clean test
