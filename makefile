all: main.c  circulo.c ponto.c
	gcc main.c circulo.o ponto.o -std=c99 -pedantic-errors -Wall -lm

run:
	./main

circulo.o:
	gcc -c circulo.o

ponto.o:
	gcc -c ponto.o

