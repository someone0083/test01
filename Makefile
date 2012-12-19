all: foo.c
	gcc foo.c -o foo
clean:
	rm -f foo
