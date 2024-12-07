#include <stdio.h>
#include <unistd.h> 

int main() {
    printf("I am Parent\n");
    fork();
    fork();
    fork();
    printf("Hello World...!\n");
    return 0; 
}

