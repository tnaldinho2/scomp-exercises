#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid1, pid2;
    int status;

    // Fork first child
    pid1 = fork();
    if (pid1 == 0) {
        // First child process
        printf("I am the first child with PID: %d\n", getpid());
        sleep(5); // Sleep for 5 seconds
        exit(1); // Return an exit value of 1
    } else if (pid1 < 0) {
        // Error occurred
        perror("Failed to fork first child");
        return 1;
    }

    // Fork second child
    pid2 = fork();
    if (pid2 == 0) {
        // Second child process
        printf("I am the second child with PID: %d\n", getpid());
        exit(2); // Return an exit value of 2
    } else if (pid2 < 0) {
        // Error occurred
        perror("Failed to fork second child");
        return 1;
    }

    // Parent process
    printf("I am the father with PID: %d\n", getpid());

    // Wait for the first child to finish
    if (waitpid(pid1, &status, 0) == -1) {
        perror("Error waiting for first child");
    } else {
        if (WIFEXITED(status)) {
            printf("First child exited normally with status: %d\n", WEXITSTATUS(status));
        } else {
            printf("First child exited abnormally\n");
        }
    }

    // Wait for the second child
    if (waitpid(pid2, &status, 0) == -1) {
        perror("Error waiting for second child");
    } else {
        if (WIFEXITED(status)) {
            printf("Second child exited normally with status: %d\n", WEXITSTATUS(status));
        } else {
            printf("Second child exited abnormally\n");
        }
    }

    return 0;
}