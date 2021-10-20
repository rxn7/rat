/*
*   rat - cat clone using only stdio.h library.
*   https://github.com/rotthin/rat
*/

#include <stdio.h>

static void print_content(const char* path) {
	FILE* file = fopen(path, "rt");
	if(!file) {
		printf("Failed to open %s.\n", path);
		return;
    }

	char c=0;
	while((c = fgetc(file)) != EOF) { 
		putchar(c);
	}

	fclose(file);
}

int main(int argc, char** argv) {
	if(argc <= 1) {
		puts("You haven't specified the file. Usage: rat <file(s)>.");
		return 1;
	}
	
	for(__uint8_t i=1; i<argc; i++) {
		print_content(argv[i]);
	}

	putchar('\n');

	return 0;
}
