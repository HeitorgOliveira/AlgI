all: main.c item.o Pilha.o
	gcc main.c item.o Pilha.o -o main -std=c99 -pedantic-errors -Wall -lm

run:
	./main

item.o:
	gcc -c item.c -o item.o

Pilha.o:
	gcc -c Pilha.c -o Pilha.o

