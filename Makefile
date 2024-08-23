CC=gcc
CFLAGS=-O3

useless: useless.c
	$(CC) -o useless.amd64 useless.c
