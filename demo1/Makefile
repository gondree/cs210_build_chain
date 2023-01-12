

all: demo1

demo1.i: demo1.c
	gcc -E demo1.c -o demo1.i

demo1.s: demo1.c
	gcc -S demo1.c -o demo1.s

demo1.o: demo1.c
	gcc -c demo1.c

demo1: demo1.o
	gcc demo1.o -o demo1

clean:
	rm -f demo1 demo1.o demo1.i demo1.s
