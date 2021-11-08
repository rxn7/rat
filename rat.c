#include <stdio.h>

static void rat(const char* path) {
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
		puts("You haven't specified the file(s). Usage: rat <file(s)>.");
		return 1;
	}
	
	for(unsigned short i=1; i<argc; i++) {
	        rat(argv[i]);
	}

	putchar('\n');

	return 0;
}
