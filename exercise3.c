#include <stdio.h>
#include <unistd.h>  // For fork(), getpid(), getppid(), sleep()

int main() {
    int ret;
    printf("Hello World\n");

    ret = fork();  // Create a new process

    if (ret == 0) {
        // This block is executed by the child process
        printf("I am Child and Return Value=%d\n", ret);
        printf("Child PID: %d\n", getpid());              // Print the child's PID
        printf("Child's Parent PID: %d\n", getppid());    // Print the child's parent PID
    } else {
        // This block is executed by the parent process
        printf("I am Parent and Return Value=%d\n", ret);
        printf("Parent PID: %d\n", getpid());             // Print the parent's PID
    }

    sleep(20);  // Pause the process for 20 seconds
    return 0;
}

