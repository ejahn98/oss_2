CC=gcc
TARGET = Hi_exe
OBJECT = 21700602.o 21700416.o  main.o 



Hi_exe : 21700602.o 21700416.o main.o
	gcc -o Hi_exe 21700602.o 21700416.o main.o

21700602.o : main.c 
	gcc -c -o 21700602.o 21700602.c

21700416.o : main.c
	gcc -c -o 21700416.o 21700416.c

main.o : main.c
	gcc -c -o main.o main.c

clean :
	rm *.Hi_exe



