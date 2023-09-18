CC = gcc
build:
	${CC} -c cmd/hello_c.c -o cmd/hello_c.o
	${CC} -o hello_c.out cmd/hello_c.o

	${CC} -c cmd/hello_minc.c -o cmd/hello_minc.o
	${CC} -nostdlib -e _start -o hello_minc.out cmd/hello_minc.o

	nasm -f elf64 cmd/hello_asm.asm -o cmd/hello_asm.o
	ld -e _start -o hello_asm.out cmd/hello_asm.o
