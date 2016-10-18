math: main.o math.o
	cc main.o math.o -o math
math.o: math.c math.h
	cc -c math.c -Wall
main.o: main.c math.h
	cc -c main.c -Wall	
