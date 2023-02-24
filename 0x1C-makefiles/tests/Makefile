# -*- MakeFile -*-

#target: dependencies
#	action

all: sum sum2

sum: main.o add.o main.h
	gcc main.o add.o -o sum

main.o: main.c
	gcc -c main.c

add.o: add.c
	gcc -c add.c

sum2: main2.o add.o main.h
	gcc main2.o add.o -o sum2

main2.o: main2.c
	gcc -c main2.c

clean:
	rm -f *.o sum sum2

