CC = gcc
all:
	$(CC) -c boy.c `pkg-config --cflags glib-2.0 gobject-2.0`
	$(CC) -c boy.main.c `pkg-config --cflags glib-2.0 gobject-2.0`
	$(CC) -o bin/simple boy.o boy.main.o `pkg-config --libs glib-2.0 gobject-2.0`
