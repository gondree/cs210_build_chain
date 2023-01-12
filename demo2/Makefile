

all: demo2

demo2.i: demo2.c
	g++ -E demo2.c -o demo2.i

demo2.s: demo2.c
	g++ -S demo2.c -o demo2.s

demo2.o: demo2.c
	g++ -c demo2.c

demo2: demo2.o
	gcc demo2.o -o demo2

clean:
	rm -f demo2 demo2.o demo2.i demo2.s
