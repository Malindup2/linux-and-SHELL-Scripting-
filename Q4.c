#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int value = 30;

int main() {
    pid_t pid;
    pid = fork();

    if (pid == 0) {  // Child process
        value = value + 25;
    } else if (pid > 0) {  // Parent process
        value = value - 25;
        wait(NULL);  // Wait for the child process to finish
    }

    printf("Value = %d\n", value);  // Line A
    return 0;
}

