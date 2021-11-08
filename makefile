all:
	gcc rat.c -o rat

install: 
	make
	sudo cp ./rat /usr/bin/rat
