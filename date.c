#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Here comes the date. \n");
    fork();
    execl("/bin/date", "date", (char *)NULL); // Corrected here
    printf("That was the date. \n");
    return 0;
}

