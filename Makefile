# only compiles on linux

CC=gcc
CFLAGS=-O3

useless:
	$(CC) -o useless.amd64 useless.c
