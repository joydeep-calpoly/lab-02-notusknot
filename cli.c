#include<stdio.h>
#include<stdlib.h>

int main(int argc, char  *argv[]) { 
	for (int i = 1; i < argc; i++) {
		// printf("The first character is %c\n", *argv[i]);
		if (*argv[i] == '-') {
			printf("%s\n", argv[i]);
		}
	}
}
