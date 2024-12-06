#include <stdio.h>
#include <unistd.h>

int main() {
    int id;
    if ((id = fork()) == 0) {
        printf("I am child process \n");
        sleep(10);
    } else {
        printf("I am parent process \n");
    }
    return 0;
}

