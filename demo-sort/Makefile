build:
	@gcc -c -I . -o module/sort.o module/sort.c
	@gcc -c -I . -o cmd/main.o cmd/main.c
	@gcc -o main.out cmd/main.o module/sort.o

run:
	./main.out

.PHONY:
	build run