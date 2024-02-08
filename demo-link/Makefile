BUILD := build
SRC := src

CFLAGS := -fno-pic -O2
LDFLAGS := -static
# dnf --enablerepo=devel install glibc-static

${BUILD}/%.o:${SRC}/%.c
	$(shell mkdir -p $(dir $@))
	gcc ${CFLAGS} -c $< -o $@

main.out: \
	${BUILD}/a.o \
	${BUILD}/b.o \
	${BUILD}/main.o
	# ld ${LDFLAGS} $^ -o $@
	gcc ${LDFLAGS} $^ -o $@

info: main.out
	file ${BUILD}/a.o
	file main.out