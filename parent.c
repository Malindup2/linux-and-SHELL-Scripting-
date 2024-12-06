#include <stdio.h>
#include <unistd.h> // Include this for fork()

int main() {
    printf("I am Parent\n");
    fork();
    fork();
    fork();
    printf("Hello World...!\n");
    return 0; // Add a return statement
}

