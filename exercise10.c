
#include <stdio.h>
#include <unistd.h>

int main() {
    int id;
    if ((id = fork()) == 0) {
        printf("I am child process \n");
    } else {
        while(1) 
            sleep(100);
    }
    return 0;
}

