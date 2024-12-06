#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int value = 40; // Global variable

int main() {
    pid_t pid; 
    pid = fork(); // Create a new process

    if (pid == 0) { 
        // Child process
        value = value + 15;
    }
    else if (pid > 0) { 
        // Parent process
        value = value - 15;
        printf("PARENT: value = %d \n", value); // Line A
        wait(NULL); // Parent waits for child to finish
    }
}

