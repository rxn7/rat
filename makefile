all:
	gcc rat.c -o rat -std=gnu99

install: 
	make
	sudo cp ./rat /usr/bin/rat
