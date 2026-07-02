#include<stdio.h>
#include<stdlib.h>

int main(int argc, char  *argv[]) { 
	//printf("The number of arguments are %d\n", argc);
	// for (int i = 0; i < argc; i++) {
	// 	printf("%s\n", argv[i]);	
	// }
	for (int i = 1; i < argc; i++) {
		printf("The first character is %s\n", argv[i]);
	}
	
	// long print_count;
	// char *endptr;
	// print_count = strtol(argv[1], &endptr, 10);

	// if (print_count < 0) {
	// 	perror("The first argument cannot be negative.\n");
	// 	return 1;
	// }		
	// printf("There should be %ld arguments\n", print_count);

	// printf("The string to print is %s\n", argv[2]);
}
