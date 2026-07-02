#include <stdlib.h>
#include <stdio.h>

// must use a double pointer here. this is because you can't change
// the ptr outside the function (a is just a copy). Therefore, you
// change the value of the pointer to ptr
void my_function(char **);

int main(int argc, char *argv[]) {
    char *ptr;
    ptr = malloc(10);

    if(ptr != NULL) printf("FIRST TEST: ptr is not null\n");
    else printf("FIRST TEST: ptr is null\n");

    my_function(&ptr);

    if(ptr != NULL) printf("SECOND TEST: ptr is not null\n");
    else printf("SECOND TEST: ptr is null\n");
}

void my_function(char **a) {
    // if I null the ptr directly, I can't free it. but if I free it,
    // I lose the ptr and can't null it. so I have to use a temp variable
    char *temp = *a;
    *a = NULL;
    free(temp);
}
