#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>  // Include this header for wait()

// Define function_A
void function_A() {
    printf("Child process running function_A()\n");
}

int main() {
    pid_t pid;  // Declare a variable to store process IDs

    for (int i = 0; i < 10; i++) {
        if ((pid = fork()) < 0) {
            // Handle fork error
            perror("fork failed");
            return 1;
        } else if (pid == 0) {
            // This block runs in the child process
            function_A();  // Call a function in the child process
            return 0;      // Child process exits after running the function
        }
        // This block runs in the parent process
        printf("process ID: %d \n", pid); // Line A - prints child process ID
    }

    for (int i = 0; i < 10; i++) {  // Line B - parent waits for all children
        wait(NULL);  // Parent waits for each of the 10 child processes to finish
    }

    return 0;
}

