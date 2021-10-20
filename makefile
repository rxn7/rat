CFLAGS = -std=gnu11
SOURCES = -c *.c
HEADERS = -Isrc
OBJS = rat.o

all: compile link clean

install: 
	make
	sudo cp ./rat /usr/bin/rat

compile:
	gcc $(SOURCES) $(HEADERS) $(CFLAGS)

link:
	gcc $(OBJS) -o rat

clean:
	rm *.o
