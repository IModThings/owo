#include <stdio.h>
#include <getopt.h>
#include <stdlib.h>

static void help() {
	printf("usage: owo [-h|-v] \n");
	exit(EXIT_SUCCESS);
}

static void version() {
	printf("v0.1 \n");
	exit(EXIT_SUCCESS);
}

int main(int argc, char *argv[]) {
	int opt;

	while ((opt = getopt(argc, argv, "hv")) != -1) {
		switch (opt) {
			case 'h':
				help();
				break;
			case 'v':
				version();
				break;
			default:
				help();
				break;
		}
	}

	if (optind == argc) {
		char c;
		char d = 0;

		while ((c = getchar()) != EOF) {
			if (c == 'r' || c == 'l') c = 'w';
			if (c == 'R' || c == 'L') c = 'W';
			if (d == 'n' && c == 'a') putchar('y');
			if (d == 'N' && c == 'A') putchar('Y');

			putchar(c);
			d = c;
		}
	}
}
